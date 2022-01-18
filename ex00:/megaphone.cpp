#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2 && argc != 1)
	{
		std::cout << "DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF."
			<< std::endl;
		return (0);
	}
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string text(argv[1]);
	for (size_t i = 0; i < text.length(); i++)
		std::cout << (char)std::toupper(text[i]);
	std::cout << std::endl;
	return (0);
}