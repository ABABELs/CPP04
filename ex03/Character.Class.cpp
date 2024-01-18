/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:33:34 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 11:27:51 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.Class.hpp"

Character::Character(void)
{
    std::cout << "Character created" << std::endl;
}

Character::Character(std::string name)
{
    std::cout << "Character created" << std::endl;
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    _name = name;
}

Character::Character(Character const &src)
{
    std::cout << "Character created" << std::endl;
    *this = src;
    return ;
}

Character::~Character(void)
{
    std::cout << "Character destroyed" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
    return ;
}

Character &Character::operator=(Character const &rhs)
{
    if (this == &rhs)
        return (*this);
    _name = rhs._name;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++)
            this->_inventory[i]->clone();
    }
    return (*this);
}

std::string const &Character::getName() const
{
    return (_name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    // if (idx >= 0 && idx < 4)
    //     this->_inventory[idx] = NULL;
    if (!_inventory[idx])
    {
        _inventory[idx] = 0;
    }
    else
        std::cout << "No item !" <<std::endl;
}

void Character::use(int idx, ICharacter& target)
{
    if (_inventory[idx] != NULL)
        _inventory[idx]->use(target);
    else
        std::cout << "Not item in this slot" << std::endl;
}