/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.Class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:37:15 by babels            #+#    #+#             */
/*   Updated: 2024/01/05 12:31:25 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
# define CURE_CLASS_HPP

# include <iostream>
# include "AMateria.Class.hpp"
# include "ICharacter.Class.hpp"

class Cure : public AMateria
{
    public:
        Cure(void);
        Cure(std::string const &src);
        virtual ~Cure(void);
        Cure &operator=(Cure const &rhs);
        virtual AMateria* clone(void) const;
};

#endif
