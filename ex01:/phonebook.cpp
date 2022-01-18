#include "phonebook.hpp"

void Phonebook::Add()
{
	static int i = 0;
	std::string line;

	std::cout << "Enter first name" << std::endl;
	std::getline(std::cin, line);
	this->contacts[i].SetFirstname(line);

	std::cout << "Enter last name" << std::endl;
	std::getline(std::cin, line);
	this->contacts[i].SetLastname(line);

	std::cout << "Enter nickname " << std::endl;
	std::getline(std::cin, line);
	this->contacts[i].SetNickname(line);

	std::cout << "Enter phone number" << std::endl;
	std::getline(std::cin, line);
	this->contacts[i].SetPhone_number(line);

	std::cout << "Enter darkest secret" << std::endl;
	std::getline(std::cin, line);
	this->contacts[i].SetDarkest_secret(line);

	i++;
	if (i > 7)
		i = 0;
}

void Phonebook::Search()
{
	int index;
	int i;

	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|   Index  |First name| Last name| Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (i = 0; i < 8; i++)
	{
		std::string check = contacts[i].GetFirstname();
		if (check.empty())
			break;
		std::cout << "|" << std::setw(10) << i + 1;

		std::string firstname_cut = contacts[i].GetFirstname();
		if (firstname_cut.length() > 10)
			firstname_cut = firstname_cut.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << firstname_cut;

		std::string lastname_cut = contacts[i].GetLastname();
		if (lastname_cut.length() > 10)
			lastname_cut = lastname_cut.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << lastname_cut;

		std::string nickname_cut = contacts[i].GetNickname();
		if (nickname_cut.length() > 10)
			nickname_cut = nickname_cut.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << nickname_cut << "|" << std::endl;
	};
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "Enter index of the contact: ";
	if (!(std::cin >> index) || index < 1 || index > i)
	{
		std::cin.clear();
		std::cout << "Index is incorrect" << std::endl;
	}
	else
	{
		index--;
		std::cout << "Firstname: " << contacts[index].GetFirstname() << std::endl;
		std::cout << "Lastname: " << contacts[index].GetLastname() << std::endl;
		std::cout << "Nickname: " << contacts[index].GetNickname() << std::endl;
		std::cout << "Phone number: " << contacts[index].GetPhone_number()<< std::endl;
		std::cout << "Darkest secret: " << contacts[index].GetDarkest_secret()<< std::endl;
		std::cout << std::endl;
	}
	std::cin.ignore();
}