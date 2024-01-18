/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:25:04 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 10:50:15 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.Class.hpp"

Brain::Brain(void)
{
    std::cout << "Brain created" << std::endl;
}

Brain::Brain(Brain const &src)
{
    *this = src;
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destroyed" << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            _ideas[i] = rhs._ideas[i];
    }
    return (*this);
}




