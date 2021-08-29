/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 18:25:06 by user42            #+#    #+#             */
/*   Updated: 2021/08/29 19:16:21 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

# include "ClapTrap.hpp"

class ScravTrap : public ClapTrap
{
	public:
		ScravTrap(void);
		ScravTrap(std::string &name);
		ScravTrap(ScravTrap &instance);
		~ScravTrap(void);

		ScravTrap&		operator=(ScravTrap &instance);

		void			guardGate(void);
};




#endif