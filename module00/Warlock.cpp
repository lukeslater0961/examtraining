#include "Warlock.hpp"

Warlock::Warlock(std::string n, std::string t) :name(n), title(t){
    std::cout << this->getName() << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock(){
    std::cout << this->getName() << ": My job here is done!" << std::endl;
}

std::string const Warlock::getName() const
{
    return(this->name);
}
std::string const Warlock::getTitle() const
{
    return(this->title);
}

void Warlock::introduce() const
{
    std::cout << this->getName() << ": I am " << this->getName() << ", " << this->getTitle() << "!"<< std::endl;
}


void Warlock::setTitle(const std::string t)
{
    this->title = t;
}
