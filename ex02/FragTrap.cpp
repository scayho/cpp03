
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << " default constructor of FragTrap has ben called !" << std::endl;
    this->name = "nameless";
    this->Hit_Points = 100;
    this->Energy_Points = 100;
    this->Attack_Damage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << " default desconstructor of FragTrap has ben called !" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << " default constructor of FragTrap has ben called !" << std::endl;
    this->Hit_Points = 100;
    this->Energy_Points = 100;
    this->Attack_Damage = 30;
    this->name = name;
}

FragTrap &FragTrap::operator = (FragTrap const & s)
{
    std::cout << " l3ayba ya kho " << std::endl;
    this->name = s.getName();
    this->Attack_Damage = s.getAD();
    this->Energy_Points = s.getEP();
    this->Hit_Points = s.getHP();
    return (*this);
}

FragTrap::FragTrap(FragTrap const &new_objet)
{
    std::cout << " copy from itself of FragTrap constructor has ben called !" << std::endl;
    this->name = new_objet.getName();
    this->Hit_Points = new_objet.getHP();
    this->Energy_Points = new_objet.getEP();
    this->Attack_Damage = new_objet.getAD();
}

void FragTrap::highFivesGuys(void)
{
    std::cout << " FragTrap " << this->getName() << " gives a HIGH FIVES to his sworn peers" << std::endl;
}