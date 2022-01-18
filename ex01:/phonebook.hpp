#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
# include <sstream>

class Contacts
{
	public:
		~Contacts() {};

		std::string	GetFirstname() const;
		std::string	GetLastname() const;
		std::string	GetNickname() const;
		std::string	GetPhone_number() const;
		std::string	GetDarkest_secret() const;

		void SetFirstname(const std::string& line);
		void SetLastname(const std::string& line);
		void SetNickname(const std::string& line);
		void SetPhone_number(const std::string& line);
		void SetDarkest_secret(const std::string& line);

	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
};

class Phonebook
{
	public:
		~Phonebook() {};
		void Search();
		void Add();

	private:
		Contacts contacts[8];
};

# endif
