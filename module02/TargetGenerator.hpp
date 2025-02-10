#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <string>
#include <iostream>
#include <vector>

#include "ATarget.hpp"
#include <cstring>

class TargetGenerator{
    public:
        TargetGenerator();
        ~TargetGenerator();

        void    learnTargetType(ATarget* src);
        void    forgetTargetType(std::string const& typeName);
        ATarget*   createTarget(std::string const& typeName);

    private:
        std::vector<ATarget*> targets;
};

#endif