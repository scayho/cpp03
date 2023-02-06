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

int main(void)
{
    ClapTrap s("jahad");

    std::cout << "name " << s.getName() << std::endl;
    std::cout << "hit point " << s.getHP() << std::endl;
    std::cout << "attack damage " << s.getAD() << std::endl;
    std::cout << "energy point " << s.getEP() << std::endl;
    std::cout << "----------------------\n";
    s.attack("white");
    s.attack("white");
    s.attack("white");
    s.attack("white");
    s.attack("white");
    s.attack("white");
    s.attack("white");
    s.attack("white");
    s.attack("white");
    s.attack("white");
    s.attack("white");
    std::cout << "name " << s.getName() << std::endl;
    std::cout << "hit point " << s.getHP() << std::endl;
    std::cout << "attack damage " << s.getAD() << std::endl;
    std::cout << "energy point " << s.getEP() << std::endl;
    std::cout << "----------------------\n";
    s.beRepaired(3);
    std::cout << "name " << s.getName() << std::endl;
    std::cout << "hit point " << s.getHP() << std::endl;
    std::cout << "attack damage " << s.getAD() << std::endl;
    std::cout << "energy point " << s.getEP() << std::endl;
    std::cout << "----------------------\n";
    s.takeDamage(4);
    std::cout << "name " << s.getName() << std::endl;
    std::cout << "hit point " << s.getHP() << std::endl;
    std::cout << "attack damage " << s.getAD() << std::endl;
    std::cout << "energy point " << s.getEP() << std::endl;
    std::cout << "----------------------\n";
}