/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evallee- <evallee-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:53:57 by niceguy           #+#    #+#             */
/*   Updated: 2023/12/06 16:57:39 by evallee-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	FragTrap	a;
	FragTrap	b("Morgan");

	a.highFivesGuys();
	for (int i = 0; i < 100; i++)
	{
		b.attack("Doodoo");
		b.beRepaired(1);
		if ((i % 3) == 0)
			b.takeDamage(3);
	}
}