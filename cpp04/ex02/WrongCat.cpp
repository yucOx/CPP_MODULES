#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Constructor Called\n";
    this->type = "Wrong Cat";
    
}
WrongCat::~WrongCat()
{}
WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal(copy)
{
    std::cout << "Copy Constructor Called.\n";
    *this = copy;
}
WrongCat& WrongCat::operator=(const WrongCat& copy)
{
    this->type = copy.type;
    return(*this);
}
void WrongCat::makeSound() const
{
    std::cout << " woeM woeM\n";
}
std::string WrongCat::getType() const
{
    return(this->type);
}