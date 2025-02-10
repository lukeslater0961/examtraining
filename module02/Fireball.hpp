#ifndef FIREBALL_HPP
#define FIREBALL_HPP

#include <string>
#include <iostream>

#include "ASpell.hpp"

class Fireball: public ASpell{
    public:
        Fireball();
        ~Fireball();

        virtual ASpell* clone() const;
};

#endif