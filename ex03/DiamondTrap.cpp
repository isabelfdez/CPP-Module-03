/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:10:11 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/02 19:38:27 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    this->_name.assign("Noname");
	std::cout << "DiamondTrap's default constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string &name) : ClapTrap(name), _name(name)
{
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

int				DiamondTrap::getnewHP(void)	const
{
	return (this->_newhitpoints);
}

int				DiamondTrap::getnewEP(void)	const
{
	return (this->_newenergypoints);
}

int				DiamondTrap::getnewAD(void)	const
{
	return (this->_newattackdamage);
}

DiamondTrap&		DiamondTrap::operator=(DiamondTrap &instance)
{
	this->_name = instance.getName();
	this->_hitpoints = instance.getHP();
	this->_energypoints = instance.getEP();
	this->_attackdamage = instance.getAD();
	this->_newattackdamage = instance.getnewAD();
	this->_newhitpoints = instance.getnewHP();
	this->_newenergypoints = instance.getnewEP();
	return (*this);
}

void			DiamondTrap::takeDamage(unsigned int amount)
{
	std::cout << "DiamondTrap " << this->_name << " takes " <<  amount;
	std::cout << " points of damage" << std::endl;

	this->_newenergypoints = this->_newenergypoints - amount;

	std::cout << "DiamondTrap " << this->_name << " now has " <<  this->_newenergypoints;
	std::cout << " points of energy" << std::endl;
}

void			DiamondTrap::beRepaired(unsigned int amount)
{
	std::cout << "The Gods are generous. DiamondTrap " << this->_name << " gains " <<  amount;
	std::cout << " points of energy" << std::endl;

	this->_newenergypoints = this->_newenergypoints + amount;

	std::cout << "DiamondTrap " << this->_name << " now has " <<  this->_newenergypoints;
	std::cout << " points of energy" << std::endl;
}