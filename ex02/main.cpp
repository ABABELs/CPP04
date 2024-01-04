/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: babels <babels@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:59:44 by babels            #+#    #+#             */
/*   Updated: 2024/01/04 13:42:46 by babels           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.Class.hpp"
#include "Dog.Class.hpp"
#include "Cat.Class.hpp"
#include "WrongAnimals.Class.hpp"
#include "WrongCat.Class.hpp"

int main(void)
{
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
