/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:40:37 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/03 16:33:58 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Animal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"


void test_subject(void) 
{
	std::cout << BLINK << "\n--- [TEST: Subject] ---" << RESET << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << std::endl;

	i->makeSound(); // Meow
	j->makeSound(); // Woof
	meta->makeSound(); // Animal
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
}


void test_wrong_animals() 
{
	std::cout << BLINK << "\n--- [TEST: WrongAnimal, WrongCat] ---" << RESET << std::endl;

	const WrongAnimal* wrong = new WrongAnimal();
	const WrongAnimal* wc = new WrongCat();
	std::cout << std::endl;

	std::cout << wc->getType() << std::endl;
	wc->makeSound(); // *wrong animal sound*
	std::cout << std::endl;

	delete wrong;
	delete wc;
}


void test_copies() 
{
	std::cout << BLINK << "\n--- [TEST: Copies & Affectations] ---" << RESET << std::endl;

	Dog originalDog;
	Dog copyDog(originalDog); // Copy constructor
	std::cout << std::endl;

	Cat originalCat;
	Cat copyCat;
	copyCat = originalCat; // Operator=
	std::cout << std::endl;

	std::cout << "CopyDog type: " << copyDog.getType() << std::endl;
	std::cout << "CopyCat type: " << copyCat.getType() << std::endl;
}


void test_array() 
{
	std::cout << BLINK << "\n--- [TEST: Animal table] ---" << RESET << std::endl;

	const int size = 4;
	Animal* animals[size];

	for (int i = 0; i < size; i++) 
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;

	for (int i = 0; i < size; i++) 
	{
		std::cout << animals[i]->getType() << " : ";
		animals[i]->makeSound();
	}
	std::cout << std::endl;

	for (int i = 0; i < size; i++) 
		delete animals[i];
}


int main() 
{
	test_subject();
	test_wrong_animals();
	test_copies();
	test_array();

	std::cout << BLINK << "\n✅ All tests completed.\n" << RESET << std::endl;
	return 0;
}

