/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:59:44 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 09:54:43 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.Class.hpp"
#include "Dog.Class.hpp"
#include "Cat.Class.hpp"
#include "WrongAnimals.Class.hpp"
#include "WrongCat.Class.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const WrongAnimals* wrongMeta = new WrongAnimals();
	const WrongAnimals* wrongJ = new WrongCat();
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrongJ->getType() << " " << std::endl;
	i->makeSound(); 
	j->makeSound();
	meta->makeSound();
	wrongJ->makeSound();
	wrongMeta->makeSound();

	return 0;
}
