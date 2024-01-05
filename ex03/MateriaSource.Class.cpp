/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.Class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:45:34 by babels            #+#    #+#             */
/*   Updated: 2024/01/04 15:46:23 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.Class.hpp"

MateriaSource::MateriaSource(void)
{
    std::cout << "MateriaSource created" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    std::cout << "MateriaSource created" << std::endl;
    *this = src;
}

MateriaSource::~MateriaSource(void)
{
    std::cout << "MateriaSource destroyed" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
            this->_materia[i] = rhs._materia[i];
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] == NULL)
        {
            this->_materia[i] = m;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i] != NULL && this->_materia[i]->getType() == type)
            return (this->_materia[i]->clone());
    }
    return (NULL);
}