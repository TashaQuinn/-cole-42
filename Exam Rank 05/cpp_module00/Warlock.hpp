#pragma once

#include <iostream>

class Warlock {

    std::string name, title;

    Warlock();
    Warlock(Warlock const &obj);
    Warlock &operator=(Warlock const &obj);

public:

    std::string const &getName() const;
    std::string const &getTitle() const;
    void setTitle(std::string const &title);

    Warlock(std::string const &name, std::string const &title);
    ~Warlock();

    void introduce() const;

};