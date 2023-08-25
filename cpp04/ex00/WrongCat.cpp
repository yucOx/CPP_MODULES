#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "Wrong Cat";
    std::cout << "WrongCat Constructor Called\n";
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor Called\n";
}
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