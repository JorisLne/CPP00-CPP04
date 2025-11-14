/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 12:40:37 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/06 14:39:04 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Brain.hpp"
#include "../includes/Animal.hpp"


void	testSubject(void) 
{
	std::cout << BLINK << "--- [TEST: Subject] ---" << RESET << std::endl;

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << std::endl;

	// const Animal* k = new Animal(); // invalide , ne compile pas

	delete j; // call dog & brain destructors
	delete i; // call dog & brain destructors
}


void	testDeepCopyDog(void) 
{
	std::cout << BLINK << "\n--- [TEST: Dog deep copy] ---" << RESET << std::endl;

	Dog billy;
	billy.getType();
	billy.makeSound();
	std::cout << std::endl;

	billy.setDogIdea(0, "Would like to eat");
	billy.setDogIdea(1, "Would love to play");

	Dog toto  = billy; // copy constructor
	std::cout << std::endl;
	
	std::cout << YELLOW << "billy idea 0 : " << billy.getDogIdea(0) << RESET << std::endl;
	std::cout << YELLOW << "toto idea 0 : " << toto.getDogIdea(0) << RESET << std::endl;
	std::cout << std::endl;
}


void	testDeepCopyCat(void) 
{
	std::cout << BLINK << "\n--- [TEST: Cat deep copy] ---" << RESET << std::endl;

	Cat chouquette;
	chouquette.getType();
	chouquette.makeSound();
	std::cout << std::endl;

	chouquette.setCatIdea(0, "Would like to eat");
	chouquette.setCatIdea(1, "Would love to play");

	Cat zigzag  = chouquette; // copy constructor
	std::cout << std::endl;
	
	std::cout << YELLOW << "chouquette idea 0 : " << chouquette.getCatIdea(0) << RESET << std::endl;
	std::cout << YELLOW << "zigzag idea 0 : " << zigzag.getCatIdea(0) << RESET << std::endl;
	std::cout << std::endl;
}


void	testAnimalsArray(void)
{
	std::cout << BLINK << "\n--- [TEST: Animals array] ---" << RESET << std::endl;

	const int	size = 4;
	Animal*		animals[size];

	for (int i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;

	std::cout << BLUE << "All animals make a noise :" << RESET << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << animals[i]->getType() << " : ";
		animals[i]->makeSound();
	}
	std::cout << std::endl;

	for (int i = 0; i < size; i++)
		delete animals[i];
}

int main(void) 
{
	testSubject();
	testDeepCopyDog();
	testDeepCopyCat();
	testAnimalsArray();

	std::cout << BLINK << "\n✅ All tests completed.\n" << RESET << std::endl;
	return 0;
}
