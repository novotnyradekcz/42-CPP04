/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnovotny <rnovotny@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 20:32:22 by rnovotny          #+#    #+#             */
/*   Updated: 2025/05/17 21:29:31 by rnovotny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>
# include <string>

class AAnimal
{
	public:
		AAnimal();
		AAnimal(const AAnimal &other);
		AAnimal &operator=(const AAnimal &other);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		std::string getType() const;

	protected:
		std::string _type;
};

#endif
