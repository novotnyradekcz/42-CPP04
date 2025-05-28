/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:40:35 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/28 16:17:35 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* animals[8];
	for (int i = 0; i < 4; i++)
	{
		animals[i] = new Dog();
		animals[i + 4] = new Cat();
	}
	
	for (int i = 0; i < 8; i++)
	{
		std::cout << "Animal " << i << " is a " << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
	}
	
	for (int i = 0; i < 8; i++)
	{
		delete animals[i];
	}

	Cat* cat1 = new Cat();
	cat1->getBrain()->setIdea(0, "Chase the laser pointer");
	Cat* cat2 = new Cat(*cat1);
	cat2->getBrain()->setIdea(0, "Catch the mouse");
	std::cout << "Cat1's first idea: " << cat1->getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat2's first idea: " << cat2->getBrain()->getIdea(0) << std::endl;
	
	cat1->getBrain()->setIdea(0, "Play with yarn");
	std::cout << "After changing Cat1's idea:" << std::endl;
	std::cout << "Cat1's first idea: " << cat1->getBrain()->getIdea(0) << std::endl;
	std::cout << "Cat2's first idea: " << cat2->getBrain()->getIdea(0) << std::endl;

	delete cat1;
	delete cat2;
	return 0;
}
