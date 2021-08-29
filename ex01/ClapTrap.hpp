/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 13:34:47 by user42            #+#    #+#             */
/*   Updated: 2021/08/29 19:11:12 by user42           ###   ########.fr       */
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

	protected:
		std::string		getName(void)	const;
		int				getHP(void)		const;
		int				getEP(void)		const;
		int				getAD(void)		const;
		std::string		_name;
		int				_hitpoints;
		int				_energypoints;
		int				_attackdamage;
};


#endif