/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:06:47 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/06 14:36:01 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap s = ClapTrap();
    ScavTrap sss("baek-ryun");
    ScavTrap omarox = ScavTrap("ok");

    std::cout << "°°°°°°°°°name " << sss.getName() << std::endl;
    std::cout << "°°°°°°°°°hit point " << sss.getHP() << std::endl;
    std::cout << "°°°°°°°°°attack damage " << sss.getAD() << std::endl;
    std::cout << "°°°°°°°°°energy point " << sss.getEP() << std::endl;
    std::cout << "----------------------\n";
    sss.attack("white");
    std::cout << "°°°°°°°°°name " << sss.getName() << std::endl;
    std::cout << "°°°°°°°°°hit point " << sss.getHP() << std::endl;
    std::cout << "°°°°°°°°°attack damage " << sss.getAD() << std::endl;
    std::cout << "°°°°°°°°°energy point " << sss.getEP() << std::endl;
    std::cout << "----------------------\n";
    sss.guardGate();
    std::cout << "°°°°°°°°°name " << sss.getName() << std::endl;
    std::cout << "°°°°°°°°°hit point " << sss.getHP() << std::endl;
    std::cout << "°°°°°°°°°attack damage " << sss.getAD() << std::endl;
    std::cout << "°°°°°°°°°energy point " << sss.getEP() << std::endl;
    std::cout << "----------------------\n";
    sss.beRepaired(3);
    std::cout << "°°°°°°°°°name " << sss.getName() << std::endl;
    std::cout << "°°°°°°°°°hit point " << sss.getHP() << std::endl;
    std::cout << "°°°°°°°°°attack damage " << sss.getAD() << std::endl;
    std::cout << "°°°°°°°°°energy point " << sss.getEP() << std::endl;
    std::cout << "----------------------\n";
    sss.takeDamage(4);
    std::cout << "°°°°°°°°°name " << sss.getName() << std::endl;
    std::cout << "°°°°°°°°°hit point " << sss.getHP() << std::endl;
    std::cout << "°°°°°°°°°attack damage " << sss.getAD() << std::endl;
    std::cout << "°°°°°°°°°energy point " << sss.getEP() << std::endl;
    // std::cout << "name " << s.getName() << std::endl;
    // std::cout << "hit point " << s.getHP() << std::endl;
    // std::cout << "attack damage " << s.getAD() << std::endl;
    // std::cout << "energy point " << s.getEP() << std::endl;
    // std::cout << "----------------------\n";
    // s.attack("white");
    // s.attack("white");
    // s.attack("white");
    // s.attack("white");
    // s.attack("white");
    // s.attack("white");
    // s.attack("white");
    // s.attack("white");
    // s.attack("white");
    // s.attack("white");
    // s.attack("white");
    // std::cout << "name " << s.getName() << std::endl;
    // std::cout << "hit point " << s.getHP() << std::endl;
    // std::cout << "attack damage " << s.getAD() << std::endl;
    // std::cout << "energy point " << s.getEP() << std::endl;
    // std::cout << "name " << s.getName() << std::endl;
    // std::cout << "hit point " << s.getHP() << std::endl;
    // std::cout << "attack damage " << s.getAD() << std::endl;
    // std::cout << "energy point " << s.getEP() << std::endl;
    // std::cout << "name " << s.getName() << std::endl;
    // std::cout << "hit point " << s.getHP() << std::endl;
    // std::cout << "attack damage " << s.getAD() << std::endl;
    // std::cout << "energy point " << s.getEP() << std::endl;
    // std::cout << "----------------------\n";
}