#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void SpellBook::learnSpell(ASpell* src)
{
    for (std::vector<ASpell*>::iterator it = this->book.begin(); it != this->book.end(); it++)
    {
        if ((*it)->getName() == src->getName())  
            return;
    }
    this->book.push_back(src->clone());
}

void SpellBook::forgetSpell(std::string const& spellName)
{
    for (std::vector<ASpell*>::iterator it = this->book.begin(); it != this->book.end();)
    {
        if ((*it) && (*it)->getName() == spellName)
        {
            delete (*it);
            it = this->book.erase(it);
        }
        else
            ++it;
    }
}

ASpell* SpellBook::createSpell(std::string const& spellName)
{
    for (std::vector<ASpell*>::iterator it = this->book.begin(); it != this->book.end(); it++)
    {
        if ((*it)->getName() == spellName)  
            return (*it)->clone();
    }
    return NULL;
}