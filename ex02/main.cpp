/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:10:13 by user42            #+#    #+#             */
/*   Updated: 2021/08/29 21:15:14 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"
#include "FragTrap.hpp"

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
    
    name2.assign("First ScravTrap");
    ScravTrap instance2(name2);

    instance2.takeDamage(50);
    instance2.attack(target);
    instance2.beRepaired(123);
    instance2.guardGate();

    std::string name3;
    
    name3.assign("First FragTrap");
    FragTrap instance3(name3);

    instance3.takeDamage(50);
    instance3.attack(target);
    instance3.beRepaired(123);
    instance3.highFivesGuys();
}