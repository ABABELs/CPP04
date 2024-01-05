/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.Class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:25:12 by babels            #+#    #+#             */
/*   Updated: 2024/01/05 12:31:31 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

# include <iostream>
# include "AMateria.Class.hpp"
# include "ICharacter.Class.hpp"

class Ice : public AMateria
{
    public:
        Ice(void);
        Ice(std::string const &src);
        virtual ~Ice(void);
        Ice &operator=(Ice const &rhs);
        virtual AMateria* clone(void) const;
};

#endif