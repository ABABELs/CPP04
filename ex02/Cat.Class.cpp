/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:04:49 by babels            #+#    #+#             */
/*   Updated: 2024/01/04 13:37:59 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.Class.hpp"

Cat::Cat(void)
{
    std::cout << "Cat created" << std::endl;
	_brain = new Brain();
	_type = "Cat";
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	_brain = new Brain();
	_type = src._type;
}

Cat::~Cat(void)
{
    std::cout << "Cat destroyed" << std::endl;
    delete _brain;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat Copy assignment operator overload" << std::endl;
	_brain = new Brain();
	_type = rhs._type;
	return (*this);
}

void Cat::makeSound(void) const
{
    std::cout << "Cat sound" << std::endl;
}