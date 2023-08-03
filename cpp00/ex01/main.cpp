#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

void    guide()
{  
	 std::cout << "====================================" << std::endl;
    std::cout << "| Welcome to the Crappiest PhoneBook |" <<std::endl;
    std::cout << "|     / \\__ This code is written     |" << std::endl;
    std::cout << "|    (    @\\___         by yucOx     |" << std::endl;
    std::cout << "|     /         O                    |" << std::endl;
    std::cout << "|    /   (_____/                     |" << std::endl;
    std::cout << "|  /_____/   U                       |" << std::endl;
    std::cout << "|                                    |" << std::endl;
    std::cout << "|          OPTIONS:                  |" << std::endl;
    std::cout << "|   ADD - Add a Useless Contact      |" << std::endl;
    std::cout << "| SEARCH - Waste Time Searching      |" << std::endl;
    std::cout << "|   EXIT - Escape from this Nonsense |" << std::endl;
    std::cout << "====================================" << std::endl;
}

int main()
{
	Phonebook phone_book;
	guide();
	int i = 0;
	std::string input;
	std::cout << "What do you want to do? : ";
	while(input != "EXIT")
	{
		std::cin >> input;

		if(input == "EXIT")
		{
			std::cout << "\tGo to the outside and get some fresh air..\n\
	        Dont come before spend some time at outside with your friends!";
		return 0;
		}
		if(input != "ADD" && input != "SEARCH")
			std::cout << "Just use to the 'SEARCH' or 'ADD' command.. :";
		if(input == "ADD")
		{
			phone_book.add(i);
			i++;
			if(i > 7)
				i = 0;
		}
		else if(input == "SEARCH")
		{
			
			phone_book.search();
		}
	}	
}