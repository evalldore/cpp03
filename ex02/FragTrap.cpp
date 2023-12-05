/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:36:52 by niceguy           #+#    #+#             */
/*   Updated: 2023/12/05 16:31:14 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("FragTrap", 100, 50, 20) {
	std::cout << "FragTrap default constructor" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap default destructor" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 50, 20) {
	std::cout << "FragTrap name constructor " << name << std::endl;
}

void FragTrap::highFivesGuys(void) const {
	std::cout << "A FragTrap named " << _name << " wants to give you a highfive!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
	{
		std::cout << "Fragtrap named " << _name << " cannot attack because ";
		if (_hitPoints == 0)
			std::cout << "it died!" << std::endl;
		else if (_energyPoints == 0)
			std::cout << "it ran out of energy!" << std::endl; 
		return;
	}
	_energyPoints--;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}