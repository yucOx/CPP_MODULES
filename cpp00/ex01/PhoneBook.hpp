#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class Phonebook
{
    private:
    Contact Contact[8];
    int index;

    public:
    Phonebook();
    ~Phonebook();


    void add(int i);
    int check_in();
    void search();


};


#endif