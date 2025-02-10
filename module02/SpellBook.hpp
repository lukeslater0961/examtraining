#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <string>
#include <iostream>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <cstring>

class SpellBook{
    public:
        SpellBook();
        ~SpellBook();

        void    learnSpell(ASpell* src);
        void    forgetSpell(std::string const& spellName);
        ASpell*   createSpell(std::string const& spellName);

    private:
        std::vector<ASpell*> book;
};

#endif