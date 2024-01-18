/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:58:02 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 09:36:40 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.Class.hpp"

Animal::Animal(void)
{
    std::cout << "Animal created" << std::endl;
    _type = "Animal";
}

Animal::Animal(Animal const &src)
{
    _type = src._type;
    std::cout << "Animal created" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal destroyed" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal operator=" << std::endl;
    _type = rhs._type;
    return (*this);
}

void Animal::makeSound(void) const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType(void) const
{
    return (this->_type);
}