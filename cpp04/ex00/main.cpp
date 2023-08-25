#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{

const WrongAnimal* wrong = new WrongCat();
wrong->makeSound();
std::cout << wrong->getType() << std::endl;
WrongCat a;
std::cout << a.getType();

const Animal* meta = new Animal(); 
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;
delete wrong;

return 0;
}