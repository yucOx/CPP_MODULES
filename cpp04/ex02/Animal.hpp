#pragma once

#include "iostream"
#include "string"
class Animal
{

protected:
    std::string type;
private:
    /* data */
public:
    Animal();
    Animal(const Animal& copy);
    Animal& operator=(const Animal& copy);
    virtual ~Animal();

    virtual void makeSound() const = 0;
    std::string getType() const;
};
