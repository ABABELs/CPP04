/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:11:41 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 09:42:34 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.Class.hpp"

Dog::Dog(void) : Animal()
{
    std::cout << "Dog created" << std::endl;
    _type = "Dog";
}

Dog::Dog(Dog const &src) : Animal()
{
    this->_type = src._type;
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destroyed" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
    std::cout << "Dog operator=" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Dog sound" << std::endl;
}