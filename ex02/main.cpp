/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niceguy <niceguy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:53:57 by niceguy           #+#    #+#             */
/*   Updated: 2023/12/04 23:06:05 by niceguy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void) {
	FragTrap	a;
	FragTrap	b("Morgan");

	a.highFivesGuys();
	a.attack("Eric");
	a.attack("Eric");
	a.attack("Eric");
	a.beRepaired(6);
	a.attack("Eric");
}