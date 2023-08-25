#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor called\n";
    this->type = "Dog";
    this->brain = new Brain();
}
Dog::~Dog()
{
    std::cout << "Dog Destructor called.\n";
    delete brain;
}
Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Copy Constructor called.\n";
    *this = copy;
}
Dog& Dog::operator=(const Dog& copy)    
{
    this->brain = copy.brain;
    this->type = copy.type;
    return(*this);
}
void Dog::makeSound() const
{
    std::cout << "Hav Hav (this is an ordinary dog but sound is turkish)\n";
}
Brain* Dog::check_the_brain()
{
    return(this->brain);
}
