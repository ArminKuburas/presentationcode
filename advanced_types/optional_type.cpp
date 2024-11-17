/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optional_type.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:05:34 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/17 21:05:52 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <optional>

std::optional<int> divide(int a, int b)
{
	if (b == 0)
		return std::nullopt;
	return a / b;
}

int	main(void)
{
	int a = 5;
	int b = 0;
	auto result = divide(a, b);
	if (result.has_value())
		std::cout << "a / b = " << result.value() << std::endl;
	else
		std::cerr << "Division by zero" << std::endl;
	return (0);
}