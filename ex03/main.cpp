/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 15:48:37 by babels            #+#    #+#             */
/*   Updated: 2024/01/08 13:19:44 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.Class.hpp"
#include "Cure.Class.hpp"
#include "Character.Class.hpp"
#include "MateriaSource.Class.hpp"
#include "IMateriaSource.Class.hpp"
#include "ICharacter.Class.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	// me->equip(tmp->clone());
	
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	// me->unequip(0);
	// me->unequip(1);
	// me->unequip(2);
	delete bob;
	delete me;
	delete src;
	return 0;
}