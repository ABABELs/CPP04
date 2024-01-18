/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:59:44 by babels            #+#    #+#             */
/*   Updated: 2024/01/18 10:42:58 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.Class.hpp"
#include "Dog.Class.hpp"
#include "Cat.Class.hpp"
#include "WrongAnimals.Class.hpp"
#include "WrongCat.Class.hpp"

int main(void)
{
	// const Animal* meta = new Animal();
	// std::cout << "meta is a " << meta->getType() << std::endl;
    // meta->makeSound();
	// delete meta;

	// const Animal* j = new Dog();
	// j->makeSound();
	// std::cout << "j is a " << j->getType() << std::endl;
	// delete j;

	// const Animal* i = new Cat();
	// i->makeSound();
	// std::cout << "i is a " << i->getType() << std::endl;
	// delete i;

	// const Cat* cat = new Cat();
	// std::cout << "Cat is a " << cat->getType() << std::endl;
	// cat->makeSound();
	// delete cat;
	
	Animal *animals[5];
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl; 
	for (int i = 0; i < 5; i++)
		delete animals[i];
	std::cout << std::endl; 

	Dog dog;
	{
		std::cout << "Dog is a " << dog.getType() << std::endl;
		dog.makeSound();
		Dog i = dog;
		i.makeSound();
	}
	dog.makeSound();
	std::cout << "Dog is a " << dog.getType() << std::endl;


	return 0;
}
