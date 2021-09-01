/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:10:11 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/01 16:45:03 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    this->_name.assign("Noname");
	std::cout << "DiamondTrap's default constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string &name)
{
    this->_name = name;
	std::cout << "DiamondTrap's assignation constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &instance)
{
	std::cout << "DiamondTrap's copy constructor has been called" << std::endl;
	*this = instance;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap's destructor has been called" << std::endl;
}

DiamondTrap&		DiamondTrap::operator=(DiamondTrap &instance)
{
	this->_name = instance.getName();
	this->_hitpoints = instance.getHP();
	this->_energypoints = instance.getEP();
	this->_attackdamage = instance.getAD();
	return (*this);
}

void			DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->_name << " takes " <<  amount;
	std::cout << " points of damage" << std::endl;

	this->_energypoints = this->_energypoints - amount;

	std::cout << "DiamondTrap " << this->_name << " now has " <<  this->_energypoints;
	std::cout << " points of energy" << std::endl;
}

void			DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "The Gods are generous. DiamondTrap " << this->_name << " gains " <<  amount;
	std::cout << " points of energy" << std::endl;

	this->_energypoints = this->_energypoints + amount;

	std::cout << "DiamondTrap " << this->_name << " now has " <<  this->_energypoints;
	std::cout << " points of energy" << std::endl;
}