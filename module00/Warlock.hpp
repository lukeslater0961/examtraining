#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <string>
#include <iostream>

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
    private:
        std::string name;
        std::string title;
};

#endif