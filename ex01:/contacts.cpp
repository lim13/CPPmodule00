#include "phonebook.hpp"

std::string	Contacts::GetFirstname() const
{
	return (firstname);
}

std::string	Contacts::GetLastname() const
{
	return (lastname);
}

std::string	Contacts::GetNickname() const
{
	return (nickname);
}

std::string	Contacts::GetPhone_number() const
{
	return (phone_number);
}

std::string	Contacts::GetDarkest_secret() const
{
	return (darkest_secret);
}

void Contacts::SetFirstname(const std::string& line)
{
	firstname = line;
}

void Contacts::SetLastname(const std::string& line)
{
	lastname = line;
}

void Contacts::SetNickname(const std::string& line)
{
	nickname = line;
}

void Contacts::SetPhone_number(const std::string& line)
{
	phone_number = line;
}

void Contacts::SetDarkest_secret(const std::string& line)
{
	darkest_secret = line;
}