#include "PhoneBook.hpp"

Phonebook::Phonebook()
{
    this->index = 0;
}
Phonebook::~Phonebook(){};

void Phonebook::add(int i)
{
    if(this->check_in() <= 7)
        this->index += 1;
    this->Contact[i].add_contact();
    return;
}
int Phonebook::check_in()
{
    return this-> index;
}
void Phonebook::search()
{
    int i = 0;
    int index = check_in();
    std::cout << "Enter a index for the person info **only numbers : ";
    std::cin >> i;
    if(!(i >= 0 && i <= 7))
    {
        std::cout << "Only '0' to '7' :";
        std::cin >> i;
    }
    std::cout << "+----------+----------+----------+----------+\n";
	std::cout << "|" << std::setw(10) << "index" << "|" \
		<< std::setw(10) << "first name" << "|"\
		<< std::setw(10) << "last name" << "|" \
		<< std::setw(10) << "nickname" << "|\n";
	std::cout << "+----------+----------+----------+----------+\n";
   
    
    i = 0;
    while(index > i)
    {   
        this->Contact[i].print_all(i);
        std::cout << "" << std::endl;
        i++;
    }
    int inp = 0;
    std::cout << "**Enter to index which you want to see**\n";
    std::cout << "Give me more for another details : ";
    std::cin>> inp;
    if(!(inp >= 0 && inp <= 7))
        std::cout << "Just enter the index who is in your Contact!\n";
    else
        this->Contact[inp].show_more();
    std::cout << "Enter a new command : ";
    
}