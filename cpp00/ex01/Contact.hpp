#ifndef CONTACT_HPP
#define CONTACT_HPP
#include "string"
#include <iostream>
#include <iomanip> //for setw() and more

class Contact
{
    private:
        std::string name;
        std::string surname;
        std::string nickname;
        std::string number;
        std::string secret;
    public:
        Contact();


        void add_contact();
        void print_all(int i);
        void show_more();
        std::string how_large(std::string s);
        
};

#endif