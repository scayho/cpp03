/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 05:43:16 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/06 11:16:33 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
  private :
  
    std::string name;
    int Hit_Points;
    int Energy_Points;
    int Attack_Damage;

  public :
  
    ClapTrap();
    ~ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(ClapTrap &new_objet);
    
    // member functions 

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    // the getters functions 
    
    std::string getName(void);
    int getAD(void);
    int getEP(void);
    int getHP(void);
    
    // the setters functions
    
    void setName(std::string name);
    void setAD(int number);
    void setEP(int number);
    void setHP(int number);
    
    // operators overloading
    
    ClapTrap &operator = (ClapTrap & s);
};

#endif