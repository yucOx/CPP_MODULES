#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog& copy);
    Dog& operator=(const Dog& copy);
    virtual ~Dog();

    void  makeSound() const;
    Brain* check_the_brain();
};
