/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:34:43 by user42            #+#    #+#             */
/*   Updated: 2021/08/29 19:14:27 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Noname"), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
	std::cout << "ClapTrap's default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string &name) : _name(name), _hitpoints(10), _energypoints(10), _attackdamage(0)
{
	std::cout << "ClapTrap's assignation constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &instance)
{
	std::cout << "ClapTrap's copy constructor has been called" << std::endl;
	*this = instance;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap's destructor has been called" << std::endl;
}

ClapTrap&		ClapTrap::operator=(ClapTrap &instance)
{
	this->_name = instance.getName();
	this->_hitpoints = instance.getHP();
	this->_energypoints = instance.getEP();
	this->_attackdamage = instance.getAD();
	return (*this);
}

std::string		ClapTrap::getName(void)	const
{
	return (this->_name);
}

int				ClapTrap::getHP(void)	const
{
	return (this->_hitpoints);
}

int				ClapTrap::getEP(void)	const
{
	return (this->_energypoints);
}

int				ClapTrap::getAD(void)	const
{
	return (this->_attackdamage);
}

void			ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " <<  target;
	std::cout << ", causing " << this->_attackdamage << " points of damage" << std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " <<  amount;
	std::cout << " points of damage" << std::endl;

	this->_energypoints = this->_energypoints - amount;

	std::cout << "ClapTrap " << this->_name << " now has " <<  this->_energypoints;
	std::cout << " points of energy" << std::endl;
}

void			ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "The Gods are generous. ClapTrap " << this->_name << " gains " <<  amount;
	std::cout << " points of energy" << std::endl;

	this->_energypoints = this->_energypoints + amount;

	std::cout << "ClapTrap " << this->_name << " now has " <<  this->_energypoints;
	std::cout << " points of energy" << std::endl;
}