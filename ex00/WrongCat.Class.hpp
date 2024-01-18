/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:31:35 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 09:46:46 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP

# include "WrongAnimals.Class.hpp"

class WrongCat : public WrongAnimals
{
    public:
        WrongCat(void);
        virtual ~WrongCat(void);
        void makeSound(void) const;
};

#endif