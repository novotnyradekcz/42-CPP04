/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:40:35 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/28 16:39:24 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// AAnimal* impossibleAnimal = new AAnimal(); // This will not compile
	
	Dog* dog1 = new Dog();
	dog1->getBrain()->setIdea(0, "Chase the ball");
	Dog* dog2 = new Dog(*dog1);
	dog2->getBrain()->setIdea(0, "Bark at the mailman");
	std::cout << "Dog1's first idea: " << dog1->getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog2's first idea: " << dog2->getBrain()->getIdea(0) << std::endl;
	
	dog1->getBrain()->setIdea(0, "Play fetch");
	std::cout << "After changing Dog1's idea:" << std::endl;
	std::cout << "Dog1's first idea: " << dog1->getBrain()->getIdea(0) << std::endl;
	std::cout << "Dog2's first idea: " << dog2->getBrain()->getIdea(0) << std::endl;

	delete dog1;
	delete dog2;
	
	return 0;
}
