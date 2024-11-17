/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lambda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:41:39 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/17 20:49:01 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int	main(void)
{
	std::vector<int> v = {1, 2, 3, 4, 5};

	std::for_each(v.begin(), v.end(), [](int i) { std::cout << i << std::endl; });
	
	auto add = [](int a, int b) -> int { return (a + b); };
	std::function<int(int, int)> subtract = [](int a, int b) -> int { return (a - b); };
	
	std::cout << "add(5, 2) = " << add(5, 2) << std::endl;
	std::cout << "subtract(5, 2) = " << subtract(5, 2) << std::endl;

	int i = 0;
	auto increment = [&i]() { i++; };
	increment();
	std::cout << "i = " << i << std::endl;
	increment();
	std::cout << "i = " << i << std::endl; 

	return (0);
}