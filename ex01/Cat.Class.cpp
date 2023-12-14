/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:04:49 by babels            #+#    #+#             */
/*   Updated: 2023/12/14 15:24:30 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.Class.hpp"

Cat::Cat(void)
{
    std::cout << "Cat created" << std::endl;
    _type = "Cat";
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(Cat const &src)
{
    *this = src;
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destroyed" << std::endl;
    delete _brain;
}

Cat &Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Cat sound" << std::endl;
}