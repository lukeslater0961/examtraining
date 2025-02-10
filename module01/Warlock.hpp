#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>
#include <vector>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <cstring>

class Warlock{
    public:
        Warlock(std::string n, std::string t);
        Warlock& operator=(const Warlock& other);
        Warlock(const Warlock& other);
        ~Warlock();

        std::string const getName() const;
        std::string const getTitle() const;
        void setTitle(const std::string t);
        void introduce() const;

        void    learnSpell(ASpell* src);
        void    forgetSpell(std::string spellName);
        void    launchSpell(std::string spellName, ATarget& src);

    private:
        std::string name;
        std::string title;
        std::vector<ASpell*> spellBook;
};

#endif