/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:11:41 by babels            #+#    #+#             */
/*   Updated: 2023/12/14 13:20:57 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.Class.hpp"

Dog::Dog(void)
{
    std::cout << "Dog created" << std::endl;
    _type = "Dog";
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog created" << std::endl;
}

Dog::Dog(Dog const &src)
{
    *this = src;
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destroyed" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void Dog::makeSound(void) const
{
    std::cout << "Dog sound" << std::endl;
}