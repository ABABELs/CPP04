/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:55:59 by babels            #+#    #+#             */
/*   Updated: 2024/01/04 16:05:05 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.Class.hpp"

AMateria::AMateria(void)
{
    std::cout << "AMateria created" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
    std::cout << "AMateria created" << std::endl;
    *this = src;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria created" << std::endl;
    _type = type;
}

AMateria:: ~AMateria(void)
{
    std::cout << "AMateria destroyed" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void AMateria::use(ICharacter& target)
{
    if (this->_type == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (this->_type == "cure")
        std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    else
        std::cout << "This materia doesn't exist" << std::endl;
}

std::string const &AMateria::getType(void) const
{
    return (this->_type);
}

