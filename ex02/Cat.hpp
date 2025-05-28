/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 21:32:39 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/28 16:25:30 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:
		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		~Cat();

		void makeSound() const;
		void setBrain(Brain *brain);
		Brain *getBrain() const;
	private:
		Brain *_brain;
};

#endif
