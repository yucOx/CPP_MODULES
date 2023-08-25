#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal Constructor called.\n";
}
Animal::~Animal()
{
    std::cout << "Default Destructor called.\n";
}
Animal::Animal(const Animal& copy)
{
    std::cout << "Copy Constructor called.\n";
    *this = copy;
}
Animal& Animal::operator=(const Animal& copy)
{
    this->type = copy.type;
    return(*this);
}
void  Animal::makeSound() const
{
    std::cout << "Some animal sound\n";
}
std::string Animal::getType() const
{
    return(this->type);
}