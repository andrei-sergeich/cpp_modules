#include "Contact.hpp"

Contact::Contact() {};

Contact::~Contact() {};

std::string readData(const char *prompt)
{
	std::string	input;

	while(input.empty())
	{
		std::cout << prompt;
		if (!std::getline(std::cin, input))
			exit(EXIT_FAILURE);
		else if (input.find_first_not_of(" \t\v\r\n") == input.npos)
			input.clear();
	}
	return input;
}

std::string Contact::getFirstName() const
{
	return firstName;
}

std::string Contact::getLastName() const
{
	return lastName;
}

std::string Contact::getNickName() const
{
	return nickName;
}

std::string Contact::getPhoneNumber() const
{
	return phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return darkestSecret;
}

void Contact::setFirstName()
{
	firstName = readData("Enter a first name: ");
}

void Contact::setLastName()
{
	lastName = readData("Enter a last name: ");
}

void Contact::setNickName()
{
	nickName = readData("Enter a nickname: ");
}

void Contact::setPhoneNumber()
{
	phoneNumber = readData("Enter a phone number: ");
}

void Contact::setDarkestSecret()
{
	darkestSecret = readData("Enter a darkest secret: ");
}
