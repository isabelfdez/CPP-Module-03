/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:34:47 by user42            #+#    #+#             */
/*   Updated: 2021/09/01 15:45:55 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <iomanip>
# include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string &name);
		ClapTrap(ClapTrap &instance);
		~ClapTrap(void);

		ClapTrap&		operator=(ClapTrap &instance);

		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		getName(void)	const;

	protected:
		int				getHP(void)		const;
		int				getEP(void)		const;
		int				getAD(void)		const;
		std::string		_name;
		int				_hitpoints;
		int				_energypoints;
		int				_attackdamage;
};


#endif