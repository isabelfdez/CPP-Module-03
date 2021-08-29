/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 21:04:25 by user42            #+#    #+#             */
/*   Updated: 2021/08/29 21:15:53 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    this->_name.assign("Noname");
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
	std::cout << "FragTrap's default constructor has been called" << std::endl;
}

FragTrap::FragTrap(std::string &name)
{
    this->_name = name;
    this->_hitpoints = 100;
    this->_energypoints = 100;
    this->_attackdamage = 30;
	std::cout << "FragTrap's assignation constructor has been called" << std::endl;
}

FragTrap::FragTrap(FragTrap &instance)
{
	std::cout << "FragTrap's copy constructor has been called" << std::endl;
	*this = instance;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap's destructor has been called" << std::endl;
}

FragTrap&		FragTrap::operator=(FragTrap &instance)
{
	this->_name = instance.getName();
	this->_hitpoints = instance.getHP();
	this->_energypoints = instance.getEP();
	this->_attackdamage = instance.getAD();
	return (*this);
}

void            FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " requests a high five" << std::endl;
}

void			FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->_name << " attacks " <<  target;
	std::cout << ", causing " << this->_attackdamage << " points of damage" << std::endl;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->_name << " takes " <<  amount;
	std::cout << " points of damage" << std::endl;

	this->_energypoints = this->_energypoints - amount;

	std::cout << "FragTrap " << this->_name << " now has " <<  this->_energypoints;
	std::cout << " points of energy" << std::endl;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "The Gods are generous. FragTrap " << this->_name << " gains " <<  amount;
	std::cout << " points of energy" << std::endl;

	this->_energypoints = this->_energypoints + amount;

	std::cout << "FragTrap " << this->_name << " now has " <<  this->_energypoints;
	std::cout << " points of energy" << std::endl;
}