/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.Class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:57:26 by babels            #+#    #+#             */
/*   Updated: 2023/12/14 13:25:32 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <iostream>

class Animal
{
    public:
        Animal(void);
        Animal(std::string type);
        Animal(Animal const &src);
        virtual ~Animal(void);
        Animal &operator=(Animal const &rhs);
        virtual void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string _type;
};

#endif