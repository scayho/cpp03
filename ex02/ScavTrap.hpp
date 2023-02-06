/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:37:29 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/06 14:38:01 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &new_objet);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);
        ScavTrap &operator = (ScavTrap const  & s);
};


#endif