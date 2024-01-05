/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:31:01 by babels            #+#    #+#             */
/*   Updated: 2024/01/04 16:01:14 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
# define CHARACTER_CLASS_HPP

# include <iostream>
# include "ICharacter.Class.hpp"

class Character : public ICharacter
{
    public:
        Character(void);
        Character(std::string name);
        Character(Character const &src);
        virtual ~Character(void);
        Character &operator=(Character const &rhs);
        
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
    private:
        std::string _name;
        AMateria *_inventory[4];
};

#endif