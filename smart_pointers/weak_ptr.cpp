/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weak_ptr.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 01:49:01 by akuburas          #+#    #+#             */
/*   Updated: 2024/11/18 01:51:38 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <memory>

class Child;

class Parent
{
public:
	std::shared_ptr<Child> child;
	Parent() { std::cout << "Parent::Parent\n"; }
	~Parent() { std::cout << "Parent::~Parent\n"; }
};

class Child
{
public:
	std::weak_ptr<Parent> parent;
	Child() { std::cout << "Child::Child\n"; }
	~Child() { std::cout << "Child::~Child\n"; }
};

int main(void)
{
	auto parent = std::make_shared<Parent>();
	auto child = std::make_shared<Child>();

	parent->child = child;
	child->parent = parent;

	std::cout << "parent.use_count() = " << parent.use_count() << std::endl;
	std::cout << "child.use_count() = " << child.use_count() << std::endl;

	return (0);
}