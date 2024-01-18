/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimals.Class.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:29:22 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 09:44:45 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimals.Class.hpp"


WrongAnimals::WrongAnimals(void)
{
    std::cout << "WrongAnimal created" << std::endl;
    _type = "WrongAnimals";
}

WrongAnimals::WrongAnimals(WrongAnimals const &src)
{
    _type = src._type;
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimals::~WrongAnimals(void)
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimals &WrongAnimals::operator=(WrongAnimals const &rhs)
{
    std::cout << "WrongAnimal operator=" << std::endl;
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