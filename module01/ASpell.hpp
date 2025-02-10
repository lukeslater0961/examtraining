#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>

class ATarget;

class ASpell{
    public:
        ASpell(std::string n, std::string e);
        ASpell& operator=(const ASpell& other);
        ASpell(const ASpell& other);
        virtual ~ASpell();

        std::string const getName() const;
        std::string const getEffects() const;
        virtual  ASpell* clone() const = 0;
        void launch(const ATarget& other);

    private:
        std::string name;
        std::string effects;
};

#endif