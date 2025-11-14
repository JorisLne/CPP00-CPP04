/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:48:48 by jlaine            #+#    #+#             */
/*   Updated: 2025/06/09 15:05:28 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <iostream>

#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"


void	test_Subject(void)
{
	std::cout << BLINK << "--- [TEST: Subject] ---" << RESET << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;
	std::cout << std::endl;
}


void test_Inventory_Limits() 
{
	std::cout << BLINK << "--- [TEST: Inventory Limits] ---" << RESET << std::endl;

	ICharacter* me = new Character("limit_tester");
	AMateria* m = new Ice();

	for (int i = 0; i < 6; i++) 
		me->equip(m->clone());

	static_cast<Character*>(me)->displayCharacterInventory();
	
	delete m;
	delete me;
	std::cout << std::endl;
}


void test_Unequip_Behavior() 
{
	std::cout << BLINK << "--- [TEST: Unequip Behavior] ---" << RESET << std::endl;

	Character* hero = new Character("hero");
	Ice* ice = new Ice();

	std::cout << BLUE << "[Equip] hero equips Ice Materia in slot 0" << RESET << std::endl;
	hero->equip(ice);

	std::cout << GREEN << "[Unequip] hero unequips slot 0 (should NOT delete)" << RESET << std::endl;
	hero->unequip(0);

	std::cout << BLUE << "[Check] is Materia still alive? Using it manually:" << RESET << std::endl;
	ice->use(*hero); // should segfault if deleted

	std::cout << GREEN << "[Use] hero tries to use/unequip slot 0 (should do nothing)" << RESET << std::endl;
	hero->use(0, *hero); // must do nothing
	hero->unequip(0); // must do nothing

	std::cout << BLUE << "[Cleanup] deleting unequipped Materia & hero" << RESET << std::endl;
	// hero->unequip(1);
	delete ice;
	delete hero;

	std::cout << std::endl;
}


void test_Clone_And_Deepcopy() 
{
	std::cout << BLINK << "--- [TEST: Clone & Deep Copy] ---" << RESET << std::endl;

	std::cout << GREEN << "[Create] Character A equips an Ice Materia" << RESET << std::endl;
	Character* a = new Character("A");
	AMateria* ice = new Ice();
	a->equip(ice);

	std::cout << BLUE << "[Clone] Character B is a deep copy of A" << RESET << std::endl;
	Character* b = new Character(*a); // deep copy

	std::cout << GREEN << "[Unequip] A unequips slot 0 — should NOT affect B" << RESET << std::endl;
	a->unequip(0); // unequip materia from A

	std::cout << BLUE << "[Use] B uses slot 0 — should still work if deep copied" << RESET << std::endl;
	b->use(0, *a); // B using Ice materia
	a->use(0, *b);

	std::cout << RED << "[Cleanup] Deleting characters & materia" << RESET << std::endl;
	delete a;
	delete b;
	delete ice;

	std::cout << std::endl;
}


void test_CreateMateria_InvalidType() 
{
	std::cout << BLINK << "--- [TEST: Create Materia & Invalid Type] ---" << RESET << std::endl;

	std::cout << GREEN << "[Init] Create MateriaSource and learn only Ice" << RESET << std::endl;
	MateriaSource* source = new MateriaSource();
	source->learnMateria(new Ice());

	std::cout << BLUE << "[Request] Try to create known Materia type: 'ice'" << RESET << std::endl;
	AMateria* known = source->createMateria("ice");

	if (known)
	{
		std::cout << GREEN << "✅ Correct behavior: 'ice' successfully created → type = " 
		          << known->getType() << std::endl;
		delete known;
	}
	else
		std::cout << RED << "❌ Error: 'ice' should have been created!" << std::endl;


	std::cout << BLUE << "[Request] Try to create unknown Materia type: 'fire'" << RESET << std::endl;
	AMateria* unknown = source->createMateria("fire");

	if (!unknown)
		std::cout << GREEN << "✅ Correct behavior: 'fire' is not known → returned 0" << std::endl;
	else
	{
		std::cout << RED << "❌ Error: 'fire' should not be created!" << std::endl;
		delete unknown;
	}

	std::cout << RED << "[Cleanup] Delete source" << RESET << std::endl;
	delete source;
	std::cout << std::endl;
}


void test_MateriaSource_Limits()
{
	std::cout << BLINK << "--- [TEST: MateriaSource Limits] ---" << RESET << std::endl;

	std::cout << GREEN << "[Init] Create empty MateriaSource" << RESET << std::endl;
	MateriaSource* source = new MateriaSource();

	std::cout << BLUE << "[Action] Try to learn 6 Materias (2 extra)" << RESET << std::endl;

	for (int i = 0; i < 6; ++i)
	{
		std::ostringstream oss;
		oss << "[Learn] Add Ice #" << (i + 1);
		std::string label = oss.str();

		std::cout << YELLOW << label << RESET << std::endl;
		source->learnMateria(new Ice());
	}

	std::cout << BLUE << "[Check] Try to create 6 Materias of type 'ice'" << RESET << std::endl;
	for (int i = 0; i < 6; ++i)
	{
		AMateria* mat = source->createMateria("ice");
		if (mat)
		{
			std::cout << GREEN << "✅ Created ice materia #" << (i + 1) << " successfully" << RESET << std::endl;
			delete mat;
		}
		else
			std::cout << RED << "❌ Failed to create ice materia #" << (i + 1) << RESET << std::endl;
	}


	source->displayMateriaSource();
	
	std::cout << RED << "[Cleanup] Delete source" << RESET << std::endl;
	delete source;
	std::cout << std::endl;
}




int main(void)
{
	test_Subject();
	test_Inventory_Limits();
	test_Unequip_Behavior();
	test_Clone_And_Deepcopy();
	test_CreateMateria_InvalidType();
	test_MateriaSource_Limits();
	return (0);
}