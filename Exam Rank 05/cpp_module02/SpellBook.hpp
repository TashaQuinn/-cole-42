#pragma once

#include "ASpell.hpp"
#include <map>

class SpellBook {

    std::map<std::string, ASpell *> arr;
    
    SpellBook(SpellBook const &obj);
    SpellBook &operator=(SpellBook const &obj);
    
public:

    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell *aspell_ptr);
    void forgetSpell(std::string const &spell_name);
    ASpell* createSpell(std::string const &spell_name);

};