/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:32:36 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/28 16:13:05 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Cat assignment operator called" << std::endl;
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

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

void Cat::setBrain(Brain *brain)
{
	if (_brain)
		delete _brain;
	_brain = brain;
}

Brain *Cat::getBrain() const
{
	return _brain;
}
