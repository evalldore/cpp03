/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:53:45 by niceguy           #+#    #+#             */
/*   Updated: 2023/12/05 14:01:21 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Claptrap default constructor" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Claptrap default destructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Claptrap name constructor " << name << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints == 0 || _energyPoints == 0)
		return; 
	_energyPoints--;
	std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints <= amount) {
		if (_hitPoints > 0)
			std::cout << "Claptrap " << _name << " took " << amount << " points of damage and died!" << std::endl;
		_hitPoints = 0;
	}
	else {
		_hitPoints -= amount;
		std::cout << "Claptrap " << _name << " took " << amount << " points of damage!" << std::endl;
	}
}
void	ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoints == 0 || _energyPoints == 0)
		return;
	_energyPoints--;
	_hitPoints = amount;
	std::cout << "Claptrap " << _name << " repaired itself for " << amount << " hit points!" << std::endl;
}