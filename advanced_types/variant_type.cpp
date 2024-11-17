/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variant_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:15:04 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/17 21:16:26 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <variant>

using variant_t = std::variant<int, double, std::string>;

void print_variant(const variant_t &v)
{
	std::visit([](const auto &e) { std::cout << e << std::endl; }, v);
}

int	main(void)
{
	variant_t v1 = 42;
	variant_t v2 = 4.42;
	variant_t v3 = "Hello, world!";

	print_variant(v1);
	print_variant(v2);
	print_variant(v3);

	return (0);
}