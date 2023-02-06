/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 05:43:16 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/06 14:29:32 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
// #include "ScavTrap.hpp"


class ClapTrap {
  protected :
  
    std::string name;
    int Hit_Points;
    int Energy_Points;
    int Attack_Damage;

  public :
  
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap const &new_objet);
    
    // member functions 

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    // the getters functions 
    
    std::string getName(void) const;
    int getAD(void) const;
    int getEP(void) const;
    int getHP(void) const;
    
    // the setters functions
    
    void setName(std::string name);
    void setAD(int number);
    void setEP(int number);
    void setHP(int number);
    
    // operators overloading
    
    ClapTrap &operator = (ClapTrap  & s);
};


#endif