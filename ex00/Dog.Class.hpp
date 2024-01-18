/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:11:13 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 09:42:59 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.Class.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(Dog const &src);
        virtual ~Dog(void);
        Dog &operator=(Dog const &rhs);
        virtual void makeSound(void) const;
    protected:
};

#endif