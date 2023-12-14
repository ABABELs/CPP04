/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimals.Class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:29:22 by babels            #+#    #+#             */
/*   Updated: 2023/12/14 13:41:59 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimals.Class.hpp"


WrongAnimals::WrongAnimals(void)
{
    std::cout << "WrongAnimal created" << std::endl;
    _type = "WrongAnimals";
}

WrongAnimals::WrongAnimals(std::string type) : _type(type)
{
    std::cout << "WrongAnimals created" << std::endl;
}

WrongAnimals::WrongAnimals(WrongAnimals const &src)
{
    *this = src;
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimals::~WrongAnimals(void)
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimals &WrongAnimals::operator=(WrongAnimals const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void WrongAnimals::makeSound(void) const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimals::getType(void) const
{
    return (this->_type);
}