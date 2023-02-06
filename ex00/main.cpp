/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 11:06:47 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/06 11:22:44 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap o;
    std::cout << "----------------------\n";
    ClapTrap siuu;
    std::cout << "----------------------\n";
    ClapTrap s("salam");
    std::cout << "----------------------\n";
    ClapTrap pp = ClapTrap();

    std::cout << o.getName() << std::endl;
    std::cout << o.getHP() << std::endl;
    std::cout << o.getAD() << std::endl;
    std::cout << o.getEP() << std::endl;
    o.setAD(20);
    o.setName("jahad");
    o.setHP(40);
    o.setEP(200);
    std::cout << o.getName() << std::endl;
    std::cout << o.getHP() << std::endl;
    std::cout << o.getAD() << std::endl;
    std::cout << o.getEP() << std::endl;
    std::cout << "----------------------\n";
    std::cout << s.getName() << std::endl;
    std::cout << s.getHP() << std::endl;
    std::cout << s.getAD() << std::endl;
    std::cout << s.getEP() << std::endl;
    s.setAD(11);
    s.setName("mazino");
    s.setHP(111);
    s.setEP(1111);
    std::cout << s.getName() << std::endl;
    std::cout << s.getHP() << std::endl;
    std::cout << s.getAD() << std::endl;
    std::cout << s.getEP() << std::endl;
    std::cout << "----------------------\n";
    std::cout << pp.getName() << std::endl;
    std::cout << pp.getHP() << std::endl;
    std::cout << pp.getAD() << std::endl;
    std::cout << pp.getEP() << std::endl;
    s.setAD(6);
    s.setName("baam");
    s.setHP(666);
    s.setEP(6666);
    std::cout << pp.getName() << std::endl;
    std::cout << pp.getHP() << std::endl;
    std::cout << pp.getAD() << std::endl;
    std::cout << pp.getEP() << std::endl;
    std::cout << "----------------------\n";
    std::cout << siuu.getName() << std::endl;
    std::cout << siuu.getHP() << std::endl;
    std::cout << siuu.getAD() << std::endl;
    std::cout << siuu.getEP() << std::endl;
}