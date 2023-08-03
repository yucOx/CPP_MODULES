#include "Contact.hpp"

Contact::Contact(){};

std::string Contact::how_large(std::string s)
{
    std::string new_s;
    new_s = s;
    if(s.length() > 10)
    {
        new_s.insert(9, ".");
        new_s = new_s.substr(0,10);
    }
    return(new_s);
}
void Contact::add_contact()
{
    std::cout << "Enter a name :";
    std::cin >> this->name;
    std::cout << "Enter a surname :";
    std::cin >> this->surname;
    std::cout << "Enter a nickname :";
    std::cin >> this->nickname;
    std::cout << "Enter a number :";
    std::cin >> this->number;
    std::cout << "Whats your secret? :";
    std::cin >> this->secret;
    std::cout << "Saved Successfully!" <<std::endl;
    std::cout << "Enter a new command : ";
}

void  Contact::print_all(int i)
{
    std::string new_name = how_large(this->name);
    std::string new_surname = how_large(this->surname);
    std::string new_nick = how_large(this->nickname);
    std::cout << std::setw(10) << i << "|";
    std::cout << std::setw(10) << new_name << "|";
    std::cout << std::setw(10) << new_surname << "|";
    std::cout << std::setw(10) << new_nick << "|";
}
void Contact::show_more()
{
    std::string new_sec = how_large(this->secret);
    std::string new_num = how_large(this->number);
        std::cout << "+----------+----------+\n";
    std::cout << "| " << std::setw(10) << "secret" << " | " << std::setw(10) << "number" << " |\n";
    std::cout << "+----------+----------+\n";
    std::cout << "| " << std::setw(10) << new_sec << " | " << std::setw(10) << new_num << " |\n";
    std::cout << "+----------+----------+\n";
}

