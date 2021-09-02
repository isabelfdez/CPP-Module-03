/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:25:03 by user42            #+#    #+#             */
/*   Updated: 2021/09/02 19:22:59 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap(void)
{
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
	this->_newenergypoints = 50;
	std::cout << "ScravTrap's default constructor has been called" << std::endl;
}

ScravTrap::ScravTrap(std::string &name)
{
    this->_name = name;
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
	this->_newenergypoints = 50;
	std::cout << "ScravTrap's assignation constructor has been called" << std::endl;
}

ScravTrap::ScravTrap(ScravTrap &instance)
{
	std::cout << "ScravTrap's copy constructor has been called" << std::endl;
	*this = instance;
}

ScravTrap::~ScravTrap(void)
{
	std::cout << "ScravTrap's destructor has been called" << std::endl;
}

ScravTrap&		ScravTrap::operator=(ScravTrap &instance)
{
	this->_name = instance.getName();
	this->_hitpoints = instance.getHP();
	this->_energypoints = instance.getEP();
	this->_attackdamage = instance.getAD();
	return (*this);
}

void            ScravTrap::guardGate(void)
{
	std::cout << "ScravTrap " << this->_name << " has now entered Gatekeeper mode" << std::endl;
}

void			ScravTrap::attack(std::string const &target)
{
	std::cout << "ScravTrap " << this->_name << " attacks " <<  target;
	std::cout << ", causing " << this->_attackdamage << " points of damage" << std::endl;
}

void			ScravTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScravTrap " << this->_name << " takes " <<  amount;
	std::cout << " points of damage" << std::endl;

	this->_energypoints = this->_energypoints - amount;

	std::cout << "ScravTrap " << this->_name << " now has " <<  this->_energypoints;
	std::cout << " points of energy" << std::endl;
}

void			ScravTrap::beRepaired(unsigned int amount)
{
	std::cout << "The Gods are generous. ScravTrap " << this->_name << " gains " <<  amount;
	std::cout << " points of energy" << std::endl;

	this->_energypoints = this->_energypoints + amount;

	std::cout << "ScravTrap " << this->_name << " now has " <<  this->_energypoints;
	std::cout << " points of energy" << std::endl;
}