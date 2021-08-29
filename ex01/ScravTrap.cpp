/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:25:03 by user42            #+#    #+#             */
/*   Updated: 2021/08/29 19:17:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScravTrap::ScravTrap(void)
{
    this->_name.assign("Noname");
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
	std::cout << "ScravTrap's default constructor has been called" << std::endl;
}

ScravTrap::ScravTrap(std::string &name)
{
    this->_name = name;
    this->_hitpoints = 100;
    this->_energypoints = 50;
    this->_attackdamage = 20;
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