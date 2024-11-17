/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unique_ptr.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:41:48 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/18 01:42:27 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <memory>

class Foo
{
public:
	Foo() { std::cout << "Foo::Foo\n"; }
	~Foo() { std::cout << "Foo::~Foo\n"; }
	void bar() { std::cout << "Foo::bar\n"; }
};

int main(void)
{
	std::unique_ptr<Foo> p1(new Foo);
	if (p1)
		p1->bar();

	{
		std::unique_ptr<Foo> p2(std::move(p1));
		p2->bar();
	}

	if (!p1)
		std::cout << "p1 is nullptr\n";

	return (0);
}