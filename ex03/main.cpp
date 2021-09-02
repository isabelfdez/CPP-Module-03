/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:10:13 by user42            #+#    #+#             */
/*   Updated: 2021/09/02 19:21:43 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int     main(void)
{
    std::string name;
    std::string target;

    name.assign("My Diamond");
    target.assign("Trap");

    DiamondTrap dt(name);

    dt.attack(target);
    dt.beRepaired(10);
    dt.takeDamage(30);
    dt.highFivesGuys();
    dt.guardGate();  
}