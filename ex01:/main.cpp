#include "phonebook.hpp"

int main(void)
{
	std::string input;
	Phonebook My_own_book;

	while (1)
	{
		std::cout << "There are 3 available commands: ADD, SEARCH, EXIT. "
					 "Choose one u need: " 	<< std::endl;
		std::getline(std::cin, input);
		if (input == "ADD")
			My_own_book.Add();
		else if (input == "SEARCH")
			My_own_book.Search();
		else if (input == "EXIT")
			break;
	}
	return (0);
}