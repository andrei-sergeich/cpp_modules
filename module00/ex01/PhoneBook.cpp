#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : m_index(0), m_number_of_records(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::Add()
{
	if (m_index > 7)
		m_index = 0;
	m_contact[m_index].setFirstName();
	m_contact[m_index].setLastName();
	m_contact[m_index].setNickName();
	m_contact[m_index].setPhoneNumber();
	m_contact[m_index].setDarkestSecret();
	m_index++;
	if (m_number_of_records < 8)
		m_number_of_records++;
}

void PhoneBook::Search()
{
	if (m_number_of_records == 0)
	{
		std::cout << "Phonebook is empty, add a record, please." << std::endl;
		return;
	}
	for (int it = 0; it < m_number_of_records; it++)
	{
		std::cout << m_contact[it].getFirstName() << std::endl;
		std::cout << m_contact[it].getLastName() << std::endl;
		std::cout << m_contact[it].getNickName() << std::endl;
		std::cout << m_contact[it].getPhoneNumber() << std::endl;
		std::cout << m_contact[it].getDarkestSecret() << std::endl;
		std::cout << m_index << std::endl;
	}
}

void PhoneBook::Open()
{
	std::string	command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		if (!std::getline(std::cin, command))
			exit(EXIT_FAILURE);
//		std::getline(std::cin, command);
		if (command == "ADD")
			Add();
		else if (command == "SEARCH")
			Search();
		else if (command == "EXIT")
			break;
	}
}
