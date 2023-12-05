/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:53:57 by niceguy           #+#    #+#             */
/*   Updated: 2023/12/04 19:06:14 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
	ClapTrap	a;
	ClapTrap	b("Morgan");

	b.takeDamage(3);
	b.beRepaired(6);
	b.takeDamage(20);
	b.beRepaired(3);
	b.attack("Eric");
	b.attack("Eric");
	b.attack("Eric");
	b.beRepaired(6);
	b.attack("Eric");
}