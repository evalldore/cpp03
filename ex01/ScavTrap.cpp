/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 19:36:52 by niceguy           #+#    #+#             */
/*   Updated: 2023/12/04 23:02:42 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("ScavTrap", 100, 50, 20) {
	std::cout << "Scavtrap default constructor" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Scavtrap default destructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20) {
	std::cout << "Scavtrap name constructor " << name << std::endl;
}

void ScavTrap::guardGate(void) const {
	std::cout << "A scavtrap named " << _name << " is in gate keeper mode!" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
		return; 
	_energyPoints--;
	std::cout << "Scavtrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}