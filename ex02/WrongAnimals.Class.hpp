/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimals.Class.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:28:08 by babels            #+#    #+#             */
/*   Updated: 2023/12/14 13:41:19 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMALS_CLASS_HPP
# define WRONGANIMALS_CLASS_HPP

# include <iostream>

class WrongAnimals
{
    public:
        WrongAnimals(void);
        WrongAnimals(std::string type);
        WrongAnimals(WrongAnimals const &src);
        virtual ~WrongAnimals(void);
        WrongAnimals &operator=(WrongAnimals const &rhs);
        void makeSound(void) const;
        std::string getType(void) const;
    protected:
        std::string _type;
};

#endif