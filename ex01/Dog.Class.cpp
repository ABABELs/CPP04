/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:11:41 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 10:42:25 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.Class.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog created" << std::endl;
	this->_brain = new Brain();
    _type = "Dog";
}

Dog::Dog(Dog const &src) : Animal()
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_brain = new Brain();
	this->_type = src._type;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog Copy assignment operator overload" << std::endl;
	if (this != &rhs)
	{
		delete _brain;
		this->_brain = new Brain();
		_type = rhs._type;
	}
	return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Dog sound" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed" << std::endl;
	delete _brain;
}