#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){}

void TargetGenerator::learnTargetType(ATarget* src)
{
    for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); it++)
    {
        if ((*it)->getType() == src->getType())  
            return;
    }
    this->targets.push_back(src->clone());
}

void TargetGenerator::forgetTargetType(std::string const& typeName)
{
    for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end();)
    {
        if ((*it) && (*it)->getType() == typeName)
        {
            delete (*it);
            it = this->targets.erase(it);
        }
        else
            ++it;
    }
}

ATarget* TargetGenerator::createTarget(std::string const& typeName)
{
    for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); it++)
    {
        if ((*it)->getType() == typeName)  
            return (*it)->clone();
    }
    return NULL;
}