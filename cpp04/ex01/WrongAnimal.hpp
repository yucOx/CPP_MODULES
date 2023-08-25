#pragma once

#include "iostream"
#include "string"

class WrongAnimal
{
protected:
    std::string type;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& copy);
    WrongAnimal& operator=(const WrongAnimal& copy);
    ~WrongAnimal();

    void virtual makeSound() const;
    std::string getType() const;
};
