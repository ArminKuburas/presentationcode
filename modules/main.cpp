/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:36:36 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/17 19:43:49 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

import math_operations;

#include <iostream>
#include <stdexcept>

int	main(void)
{
	int a = 5;
	int b = 2;
	try
	{
		std::cout << "a + b = " << add(a, b) << std::endl;
		std::cout << "a - b = " << subtract(a, b) << std::endl;
		std::cout << "a * b = " << multiply(a, b) << std::endl;
		std::cout << "a / b = " << divide(a, b) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
