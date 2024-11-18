/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structured_bindings.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 02:10:28 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/18 02:13:51 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <tuple>
#include <string>
#include <vector>
#include <utility>

struct Point
{
	int x;
	int y;
};

int	main(void)
{
	std::tuple<int, double, std::string> t(42, 4.42, "Hello, world!");

	auto [i, d, s] = t;
	std::cout << i << std::endl;
	std::cout << d << std::endl;
	std::cout << s << std::endl;

	std::pair<int, double> p(42, 4.42);
	auto [first, second] = p;
	std::cout << first << std::endl;
	std::cout << second << std::endl;

	std::array<int, 5> a = {1, 2, 3, 4, 5};

	auto [a1, a2, a3, a4, a5] = a;
	std::cout << a1 << std::endl;
	std::cout << a2 << std::endl;
	std::cout << a3 << std::endl;
	std::cout << a4 << std::endl;
	std::cout << a5 << std::endl;

	Point pt = {42, 4};
	
	auto [x, y] = pt;

	std::cout << x << std::endl;
	std::cout << y << std::endl;

	return (0);
}