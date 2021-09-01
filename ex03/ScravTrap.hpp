/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isfernan <isfernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:25:06 by user42            #+#    #+#             */
/*   Updated: 2021/09/01 13:48:16 by isfernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

# include "ClapTrap.hpp"

class ScravTrap : public virtual ClapTrap
{
	public:
		ScravTrap(void);
		ScravTrap(std::string &name);
		ScravTrap(ScravTrap &instance);
		~ScravTrap(void);

		ScravTrap&		operator=(ScravTrap &instance);

		void			attack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		void			guardGate(void);
};




#endif