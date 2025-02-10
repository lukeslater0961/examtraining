#include "ASpell.hpp"
#include "ATarget.hpp"

ASpell::ASpell(std::string n, std::string e) :name(n), effects(e){
}

ASpell::~ASpell(){
}

std::string const ASpell::getName() const
{
    return(this->name);
}
std::string const ASpell::getEffects() const
{
    return(this->effects);
}

void ASpell::launch(const ATarget& other)
{
    other.getHitBySpell(*this);
}
