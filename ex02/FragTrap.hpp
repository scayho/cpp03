
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap &operator = (FragTrap const  & s);
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const &new_objet);
        ~FragTrap();
        void highFivesGuys(void);
};

#endif