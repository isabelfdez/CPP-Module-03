/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:10:13 by user42            #+#    #+#             */
/*   Updated: 2021/08/29 19:15:03 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

int     main(void)
{
    std::string name;
    std::string target;

    name.assign("First ClapTrap");
    target.assign("Other kind of trap");

    ClapTrap instance(name);

    instance.attack(target);
    instance.takeDamage(8);
    instance.beRepaired(20);
    
    std::string name2;
    
    name2.assign("Fist ScravTrap");
    ScravTrap instance2(name2);

    instance2.takeDamage(50);
    instance2.guardGate();
}