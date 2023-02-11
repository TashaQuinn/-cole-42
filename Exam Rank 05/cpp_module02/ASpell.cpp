#include "ASpell.hpp"

ASpell::ASpell() {}

ASpell::ASpell(std::string const &name, std::string const &effects) : name(name), effects(effects) {}

ASpell::ASpell(ASpell const &obj) { *this = obj; }

ASpell &ASpell::operator=(ASpell const &obj) { 
    
    this->name = obj.name; 
    this->effects = obj.effects;
    return *this;
}

ASpell::~ASpell() {}

std::string const &ASpell::getName() const { return this->name; }

std::string const &ASpell::getEffects() const { return this->effects; }

void ASpell::launch(ATarget const &atarget_ref) const {

    atarget_ref.getHitBySpell(*this);

}