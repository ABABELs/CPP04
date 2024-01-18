/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:57:26 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 09:37:10 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>

class Animal
{
    public:
        Animal(void);
        Animal(Animal const &src);
        virtual ~Animal(void);
        Animal &operator=(Animal const &rhs);
        virtual void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string _type;
};

#endif