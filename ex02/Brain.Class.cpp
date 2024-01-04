/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:25:04 by babels            #+#    #+#             */
/*   Updated: 2024/01/04 13:41:16 by babels           ###   ########.fr       */
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




