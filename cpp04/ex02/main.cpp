#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include "Animal.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << i->getType() << std::endl;
Cat cat;
const Animal* test = &cat;
test->makeSound();

//Animal sazinek; -> For example u cant
//create object like that, because we are
//using virtual pure function here
//So we created an Abstract class in Animal 

i->makeSound();
j->makeSound();

Cat c;
Dog f;
std::cout <<"think of the Dog "<< f.check_the_brain()->ideas[99];
std::cout <<"think of the cat " << c.check_the_brain()->ideas[99];

delete j;//should not create a leak
delete i;

 


return 0;
}