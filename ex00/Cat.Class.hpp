/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:02:11 by babels            #+#    #+#             */
/*   Updated: 2023/12/14 13:08:39 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "Animal.Class.hpp"

class Cat : public Animal
{
    public:
        Cat(void);
        Cat(std::string type);
        Cat(Cat const &src);
        virtual ~Cat(void);
        Cat &operator=(Cat const &rhs);
        virtual void makeSound(void) const;
    protected:
};

#endif