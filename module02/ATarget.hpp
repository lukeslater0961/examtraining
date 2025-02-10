#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>

class ASpell;

class ATarget{
    public:
        ATarget(std::string t);
        ATarget& operator=(const ATarget& other);
        ATarget(const ATarget& other);
        virtual ~ATarget();

        std::string const getType() const;
        virtual ATarget* clone() const = 0;
        void getHitBySpell(const ASpell& other) const;

    private:
        std::string type;
};

#endif