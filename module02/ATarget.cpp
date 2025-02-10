#include "ATarget.hpp"
#include "ASpell.hpp"


ATarget::ATarget(std::string t) :type(t){}

ATarget::~ATarget(){}

std::string const ATarget::getType() const
{
    return(this->type);
}

void ATarget::getHitBySpell(const ASpell& other) const
{
    std::cout << this->getType() << " has been " << other.getEffects() << "!" << std::endl;
}
