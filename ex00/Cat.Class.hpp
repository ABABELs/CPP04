/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:02:11 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 09:39:32 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "Animal.Class.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(Cat const &src);
        virtual ~Cat(void);
        Cat &operator=(Cat const &rhs);
        virtual void makeSound(void) const;
    protected:
};

#endif