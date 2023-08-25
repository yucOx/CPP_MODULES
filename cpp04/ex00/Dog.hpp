#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
private:
    /* data */
public:
    Dog();
    Dog(const Dog& copy);
    Dog& operator=(const Dog& copy);
    ~Dog();

    void  makeSound() const;
};
