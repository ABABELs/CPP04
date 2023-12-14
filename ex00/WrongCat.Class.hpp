/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:31:35 by babels            #+#    #+#             */
/*   Updated: 2023/12/14 13:45:21 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include "WrongAnimals.Class.hpp"

class WrongCat : public WrongAnimals
{
    public:
        WrongCat(void);
        WrongCat(std::string type);
        WrongCat(WrongCat const &src);
        virtual ~WrongCat(void);
        WrongCat &operator=(WrongCat const &rhs);
        void makeSound(void) const;
    protected:
};

#endif