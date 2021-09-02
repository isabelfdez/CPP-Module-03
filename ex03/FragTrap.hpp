/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 21:04:29 by user42            #+#    #+#             */
/*   Updated: 2021/09/02 19:02:46 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string &name);
		FragTrap(FragTrap &instance);
		~FragTrap(void);

		FragTrap&		operator=(FragTrap &instance);

		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			highFivesGuys(void);

	protected:
		int				_newhitpoints;
		int				_newattackdamage;
};

#endif