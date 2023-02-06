/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 14:37:32 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/06 14:37:34 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void ScavTrap::guardGate(void)
{
    std::cout << " ScavTrap " << this->getName() << "is on the gate keeper mode bono ya bono !" << std::endl;
}

ScavTrap::ScavTrap()
{
    std::cout << " default constructor of ScavTrap has ben called !" << std::endl;
    this->name = "nameless";
    this->Hit_Points = 100;
    this->Energy_Points = 50;
    this->Attack_Damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << " default desconstructor of ScavTrap has ben called !" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << " default constructor of ScavTrap has ben called !" << std::endl;
    this->Hit_Points = 100;
    this->Energy_Points = 50;
    this->Attack_Damage = 20;
    this->name = name;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->getEP() != 0 && this->getHP() != 0 )
    {
        this->setEP(this->getEP() - 1);
        std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAD() << " points of damage!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->getName() << " can't attack cause of the lack of either the Energy or Hit Points" << std::endl;
}

ScavTrap &ScavTrap::operator = (ScavTrap const & s)
{
    std::cout << " l3ayba ya kho " << std::endl;
    this->name = s.getName();
    this->Attack_Damage = s.getAD();
    this->Energy_Points = s.getEP();
    this->Hit_Points = s.getHP();
    return (*this);
}

ScavTrap::ScavTrap(ScavTrap const &new_objet)
{
    std::cout << " copy from itself of ScavTrap constructor has ben called !" << std::endl;
    this->name = new_objet.getName();
    this->Hit_Points = new_objet.getHP();
    this->Energy_Points = new_objet.getEP();
    this->Attack_Damage = new_objet.getAD();
}