/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:53:57 by niceguy           #+#    #+#             */
/*   Updated: 2023/12/06 16:58:31 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void) {
	ScavTrap	a;
	ScavTrap	b("Morgan");

	a.guardGate();
	for (int i = 0; i < 100; i++)
	{
		b.beRepaired(1);
		b.attack("Doodoo");
		b.takeDamage(1);
	}
}