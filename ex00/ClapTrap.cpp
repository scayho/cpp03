/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 05:47:50 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/06 11:22:03 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << " default constructor has ben called !" << std::endl;
    this->name = "nameless";
    this->Hit_Points = 10;
    this->Energy_Points = 10;
    this->Attack_Damage = 0;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << " default deconstructor has ben called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << " default constructor has ben called !" << std::endl;
    this->name = name;
    this->Hit_Points = 10;
    this->Energy_Points = 10;
    this->Attack_Damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &new_objet)
{
    std::cout << " sssssdefault constructor has ben called !" << std::endl;
    this->name = new_objet.getName();
    this->Hit_Points = new_objet.getHP();
    this->Energy_Points = new_objet.getEP();
    this->Attack_Damage = new_objet.getAD();
}



void ClapTrap::attack(const std::string& target)
{
    if (this->getEP() != 0 && this->getHP() != 0 )
    {
        this->setEP(this->getEP() + 1);
        std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAD() << " points of damage!" << std::endl;
    }
    else
        std::cout << "ClapTrp " << this->getName() << " can't attack cause of the lack of either the Energy or Hit Points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->setHP(this->getHP() - amount);
    std::cout << "ClapTrap " << this->getName() << " has taken " << amount << " damage ! corrent HP is : " << this->getHP() << std::endl; 
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->getEP() != 0 && this->getHP() != 0 )
    {
        this->setEP(this->getEP() + 1);
        this->setHP(this->getAD() + amount);
        std::cout << "ClapTrap " << this->getName() << " has repaired with the amount : " << amount << "corrent HP : " << this->getHP() << std::endl;
    }
    else
        std::cout << "ClapTrp " << this->getName() << " can't repaire itself cause of the lack of either the Energy or Hit Points" << std::endl;
}


// the getters functions

std::string ClapTrap::getName(void) const
{
    return (this->name);
}

int ClapTrap::getAD(void) const
{
    return (this->Attack_Damage);
}

int ClapTrap::getEP(void) const
{
    return (this->Energy_Points);
}

int ClapTrap::getHP(void) const
{
    return (this->Hit_Points);
}

// the setters functions

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setAD(int number)
{
    this->Attack_Damage = number;
}

void ClapTrap::setEP(int number)
{
    this->Energy_Points = number;
}

void ClapTrap::setHP(int number)
{
    this->Hit_Points = number;
}

// operators overloading 

ClapTrap &ClapTrap::operator = (ClapTrap const & s)
{
    this->name = s.getName();
    this->Attack_Damage = s.getAD();
    this->Energy_Points = s.getEP();
    this->Hit_Points = s.getHP();
    return (*this);
}