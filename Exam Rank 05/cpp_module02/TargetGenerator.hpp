#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator {

    std::map<std::string, ATarget *> arr;
    
    TargetGenerator(TargetGenerator const &obj);
    TargetGenerator &operator=(TargetGenerator const &obj);
    
public:

    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget *atarget_ptr);
    void forgetTargetType(std::string const &target);
    ATarget* createTarget(std::string const &target);

};