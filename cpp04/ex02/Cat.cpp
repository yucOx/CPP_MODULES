#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Constructor called.\n";
    this->type = "Cat";
    this->brain = new Brain();
}
Cat::~Cat()
{
    std::cout << "Cat Destructor called.\n";
    delete this->brain;
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
    this->brain = copy.brain;
    Animal::type = copy.type;
    return(*this);
}
Brain* Cat::check_the_brain()
{
    return(this->brain);
}