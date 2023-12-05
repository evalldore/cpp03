/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:57:48 by niceguy           #+#    #+#             */
/*   Updated: 2023/12/04 18:54:08 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class ClapTrap {

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	private:
		std::string			_name;
		unsigned int		_hitPoints;
		unsigned int		_energyPoints;
		unsigned int		_attackDamage;
};
