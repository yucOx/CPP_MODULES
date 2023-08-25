#pragma once

#include "iostream"
#include "string.h"

class Brain
{
private:
    
public:
    std::string ideas[100];
    Brain();
    Brain(const Brain& copy);
    Brain& operator=(const Brain& copy);
    ~Brain();

};
