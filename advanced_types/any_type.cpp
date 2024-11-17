/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_type.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 23:58:19 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/18 00:30:18 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <any>

int	main(void)
{
	std::any a = 42;
	std::cout << std::any_cast<int>(a) << std::endl;

	a = 4.42;
	std::cout << std::any_cast<double>(a) << std::endl;

	a = "Hello, world!";
	std::cout << std::any_cast<const char *>(a) << std::endl;

	return (0);
}