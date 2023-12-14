/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:11:13 by babels            #+#    #+#             */
/*   Updated: 2023/12/14 15:26:43 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.Class.hpp"
# include "Brain.Class.hpp"

class Dog : public Animal
{
    public:
        Dog(void);
        Dog(std::string type);
        Dog(Dog const &src);
        virtual ~Dog(void);
        Dog &operator=(Dog const &rhs);
        virtual void makeSound(void) const;
    protected:
        Brain *_brain;
};

#endif