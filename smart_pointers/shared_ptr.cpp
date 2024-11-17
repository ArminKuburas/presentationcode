/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   shared_ptr.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:45:35 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/18 01:46:38 by akuburas         ###   ########.fr       */
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

void sharedOwnership(std::shared_ptr<Foo> p)
{
	std::cout << "sharedOwnership\n";
	p->bar();
}

int main(void)
{
	std::shared_ptr<Foo> p1(new Foo);
	if (p1)
		p1->bar();

	{
		std::shared_ptr<Foo> p2 = p1;
		sharedOwnership(p2);
	}

	if (p1)
		p1->bar();

	return (0);
}