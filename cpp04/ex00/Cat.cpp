#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constructor called.\n";
    this->type = "Cat";
}
Cat::~Cat()
{
    
}
void Cat::makeSound() const
{
    std::cout << "Miyav (this is an ordinary cat sound but sound is turkish)\n";
}
Cat::Cat(const Cat& copy) : Animal(copy)
{
    std::cout << "Copy Constructor called.\n";
    *this = copy;
}
Cat& Cat::operator=(const Cat& copy)
{
    Animal::type = copy.type;
    return(*this);
}