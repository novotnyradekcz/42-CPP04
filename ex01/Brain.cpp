/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 22:14:52 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/28 15:57:35 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	// for (int i = 0; i < 100; ++i)
	// 	_ideas[i] = "An idea";
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		_ideas[index] = idea;
	else
		std::cerr << "Cannot set idea: Index out of bounds" << std::endl;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return _ideas[index];
	else
	{
		std::cerr << "Cannot get idea: Index out of bounds" << std::endl;
		return "";
	}
}
