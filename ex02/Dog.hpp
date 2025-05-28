/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:37:08 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/28 16:26:09 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();

		void makeSound() const;
		void setBrain(Brain *brain);
		Brain *getBrain() const;
	private:
		Brain *_brain;
};

#endif
