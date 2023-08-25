#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor called\n";
    this->type = "Dog";
}
Dog::~Dog()
{

}
Dog::Dog(const Dog& copy) : Animal(copy)
{
    std::cout << "Copy Constructor called.\n";
    *this = copy;
}
Dog& Dog::operator=(const Dog& copy)
{
    this->type = copy.type;
    return(*this);
}
void Dog::makeSound() const
{
    std::cout << "Hav Hav (this is an ordinary dog but sound is turkish)\n";
}