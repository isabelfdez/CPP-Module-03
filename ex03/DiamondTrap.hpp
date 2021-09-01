/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:10:13 by isfernan          #+#    #+#             */
/*   Updated: 2021/09/01 16:50:51 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScravTrap.hpp"

class DiamondTrap : public ScravTrap, public FragTrap
{

	public:
		DiamondTrap(void);
		DiamondTrap(std::string &name);
		DiamondTrap(DiamondTrap &instance);
		~DiamondTrap(void);

		DiamondTrap&		operator=(DiamondTrap &instance);

		using				ScravTrap::attack;
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);


	private:
		int					_newhitpoints;
		int					_newenergypoints;
		int					_newattackdamage;
		using				FragTrap::_hitpoints;
		using				ScravTrap::_energypoints;
		using				FragTrap::_attackdamage;
	//	std::string		_name;
};

#endif