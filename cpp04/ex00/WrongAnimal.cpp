#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Wrong Animal!(i think its not a true one)";
    std::cout << "WrongAnimal Constructor called.\n";
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called\n";
}
WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
    std::cout << "Copy Constructor called.\n";
    *this = copy;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy)
{
    WrongAnimal::type = copy.type;
    return(*this);
}
void WrongAnimal::makeSound() const
{
    std::cout << "laminA gnorW\n";
}
std::string WrongAnimal::getType() const
{
    return(WrongAnimal::type);
}