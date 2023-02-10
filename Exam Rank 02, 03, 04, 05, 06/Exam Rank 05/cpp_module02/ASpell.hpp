#pragma once

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell {

protected:

    std::string name, effects;

public:

    ASpell();
    ASpell(std::string const &name, std::string const &effects);
    ASpell(ASpell const &obj);
    ASpell &operator=(ASpell const &obj);
    virtual ~ASpell();

    std::string const &getName() const;
    std::string const &getEffects() const;

    virtual ASpell *clone() const = 0;

    void launch(ATarget const &atarget_ref) const;

};