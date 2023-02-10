#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {

protected:

    std::string type;

public:

    ATarget();
    ATarget(std::string const &type);
    ATarget(ATarget const &obj);
    ATarget &operator=(ATarget const &obj);
    virtual ~ATarget();

    std::string const &getType() const;

    virtual ATarget *clone() const = 0;

    void getHitBySpell(ASpell const &aspell_ref) const;

};