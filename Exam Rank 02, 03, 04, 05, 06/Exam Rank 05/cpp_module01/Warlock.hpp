#pragma once

#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class Warlock {

    std::string name, title;

    Warlock();
    Warlock(Warlock const &obj);
    Warlock &operator=(Warlock const &obj);

    std::map<std::string, ASpell *> arr;

public:

    std::string const &getName() const;
    std::string const &getTitle() const;
    void setTitle(std::string const &title);

    Warlock(std::string const &name, std::string const &title);
    ~Warlock();

    void introduce() const;

    void learnSpell(ASpell *aspell_ptr);
    void forgetSpell(std::string spell_name);
    void launchSpell(std::string spell_name, ATarget const &target);

};