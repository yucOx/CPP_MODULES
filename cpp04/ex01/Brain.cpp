#include "Brain.hpp"
Brain::Brain()
{
    std::cout << "Brain Constructor called\n";
    int i = 0;
    while(i < 100)
    {
        this->ideas[i] = "Should i bite some?\n";
        i++;
    }
}
Brain::~Brain()
{
    std::cout << "Brain Destructor called\n";
}
Brain::Brain(const Brain& copy)
{
    *this = copy;
}
Brain& Brain::operator=(const Brain& copy)
{
    int i = 0;
    while(i < 100)
    {
        this->ideas[i] = copy.ideas[i];
        i++;
    }
    return(*this);
}
