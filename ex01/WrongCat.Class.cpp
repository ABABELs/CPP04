/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:32:17 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 11:46:07 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.Class.hpp"

WrongCat::WrongCat(void) : WrongAnimals()
{
    std::cout << "WrongCat created" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimals()
{
    this->_type =  src._type;
    std::cout << "WrongCat created" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void WrongCat::makeSound(void) const
{
    std::cout << "WrongCat sound" << std::endl;
}