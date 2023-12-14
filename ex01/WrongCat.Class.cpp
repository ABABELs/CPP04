/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:32:17 by babels            #+#    #+#             */
/*   Updated: 2023/12/14 13:47:08 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.Class.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat created" << std::endl;
    _type = "WrongCat";
}

WrongCat::WrongCat(std::string type) : WrongAnimals(type)
{
    std::cout << "WrongCat created" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
    *this = src;
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