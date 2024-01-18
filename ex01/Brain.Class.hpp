/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:15:23 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 10:40:16 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <iostream>

class Brain
{
    public:
        Brain(void);
        Brain(Brain const &src);
        virtual ~Brain(void);
        Brain &operator=(Brain const &rhs);
    protected:
        std::string _ideas[100];
};

#endif