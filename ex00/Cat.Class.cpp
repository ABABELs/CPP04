/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:04:49 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 09:40:23 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.Class.hpp"

Cat::Cat(void) : Animal()
{
    std::cout << "Cat created" << std::endl;
    _type = "Cat";
}

Cat::Cat(Cat const &src) : Animal()
{
    this->_type = src._type;
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destroyed" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat operator=" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Cat sound" << std::endl;
}