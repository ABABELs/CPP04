/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.Class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 13:53:45 by babels            #+#    #+#             */
/*   Updated: 2024/01/04 16:10:20 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
# define AMATERIA_CLASS_HPP

# include <iostream>
# include "ICharacter.Class.hpp"

class ICharacter;

class AMateria
{
    public:
        AMateria(void);
        AMateria(std::string const &src);
        AMateria(AMateria const &src);
        virtual ~AMateria(void);
        AMateria &operator=(AMateria const &rhs);
        virtual AMateria* clone(void) const = 0;
        virtual void use(ICharacter& target);
        std::string const &getType(void) const;
    protected:
        std::string _type;
};

#endif