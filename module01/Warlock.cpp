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

void Warlock::learnSpell(ASpell* src)
{
    for (std::vector<ASpell*>::iterator it = this->spellBook.begin(); it != this->spellBook.end(); it++)
    {
        if ((*it)->getName() == src->getName())  
            return;
    }
    this->spellBook.push_back(src->clone());
}

void Warlock::forgetSpell(std::string spellName)
{
    for (std::vector<ASpell*>::iterator it = this->spellBook.begin(); it != this->spellBook.end();)
    {
        if ((*it) && (*it)->getName() == spellName)
        {
            delete (*it);
            it = this->spellBook.erase(it);
        }
        else
            ++it;
    }
}

void    Warlock::launchSpell(std::string spellName, ATarget& src)
{
    for (std::vector<ASpell*>::iterator it = this->spellBook.begin(); it != this->spellBook.end(); it++)
    {
       if ((*it)->getName() == spellName)
        {
            std::cout << "launching" <<std::endl;
            (*it)->launch(src);
        }
    }
}