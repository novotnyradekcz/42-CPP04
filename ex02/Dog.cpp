/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:37:04 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/28 16:26:03 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other)
	{
		_type = other._type;
		if (other._brain)
			_brain = new Brain(*other._brain);
		else
			_brain = NULL;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

void Dog::setBrain(Brain *brain)
{
	if (_brain)
		delete _brain;
	_brain = brain;
}

Brain *Dog::getBrain() const
{
	return _brain;
}
