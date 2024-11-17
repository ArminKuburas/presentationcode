/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ranges_examples.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:54:20 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/17 20:59:57 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>

int main(void)
{
	std::vector<int> v = {1, 2, 3, 4, 5};

	std::ranges::for_each(v, [](int i) { std::cout << i << " " ; });
	std::cout << std::endl;

	auto doubled = v | std::views::transform([](int i) { return i * 2; });
	std::ranges::for_each(doubled, [](int i) { std::cout << i << " "; });
	std::cout << std::endl;
}