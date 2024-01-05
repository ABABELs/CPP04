/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:28:12 by babels            #+#    #+#             */
/*   Updated: 2024/01/05 13:47:01 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.Class.hpp"

Ice::Ice(void) : AMateria("ice")
{
    std::cout << "Ice created" << std::endl;
    this->_type = "ice";
    return ;
}

Ice::Ice(std::string const &type)
{
    std::cout << "Ice created" << std::endl;
    _type = type;
}

Ice:: ~Ice(void)
{
    std::cout << "Ice destroyed" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

AMateria* Ice::clone(void) const
{
    return (new Ice());
}