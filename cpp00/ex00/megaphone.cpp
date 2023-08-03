#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		 std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		 return (0);
	}
    int number1;
    int number2;

	for (number1 = 1; argv[number1]; number1++)
	{
		number2 = -1;
		while (argv[number1][++number2])
			std::cout << (char)toupper(argv[number1][number2]);
	}
	std::cout << std::endl;
}