/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:38:13 by babels            #+#    #+#             */
/*   Updated: 2024/01/05 13:46:51 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.Class.hpp"

Cure::Cure(void) : AMateria("cure")
{
    std::cout << "Cure created" << std::endl;
    this->_type = "cure";
    return ;
}

Cure::Cure(std::string const &type)
{
    std::cout << "Cure created" << std::endl;
    _type = type;
}

Cure:: ~Cure(void)
{
    std::cout << "Cure destroyed" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

AMateria* Cure::clone(void) const
{
    return (new Cure());
}