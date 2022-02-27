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
	int it;

	if (m_number_of_records == 0)
	{
		std::cout << "Phonebook is empty, add a record, please." << std::endl;
		return;
	}
	else
	{
		std::cout << "|  index   " << "|first name" << "| last name" << "| nickname |\n"
					<< "|----------" << "|----------" << "|----------" << "|----------|\n";
		for (it = 0; it < m_number_of_records; it++)
		{
			std::cout << "|" << std::setw(10) << it + 1 << "|";
			if (m_contact[it].getFirstName().length() > 10)
				std::cout.write( m_contact[it].getFirstName().c_str(), 9).put('.');
			else
				std::cout << std::setw(10) << m_contact[it].getFirstName();
			std::cout << "|";
			if (m_contact[it].getLastName().length() > 10)
				std::cout.write( m_contact[it].getLastName().c_str(), 9).put('.');
			else
				std::cout << std::setw(10) << m_contact[it].getLastName();
			std::cout << "|";
			if (m_contact[it].getNickName().length() > 10)
				std::cout.write( m_contact[it].getNickName().c_str(), 9).put('.');
			else
				std::cout << std::setw(10) << m_contact[it].getNickName();
			std::cout << "|\n";
		}
		std::cout << "---------------------END---------------------" << std::endl;
		while (true)
		{
			std::cout << "Enter the number of the record you want to display: ";
			std::string num;
			if (!std::getline(std::cin, num))
				exit(EXIT_FAILURE);
			it = atoi(num.c_str());
			if (it < 1 || it > m_number_of_records)
			{
				std::cout << "ERROR: Enter number from 1 to "
							<< m_number_of_records << std::endl;
				continue;
			}
			break;
		}
	}
	it--;
	std::cout << "The first name: " << m_contact[it].getFirstName() << "\n"
			<< "The last name: " << m_contact[it].getLastName() << "\n"
			<< "The nick name: " << m_contact[it].getNickName() << "\n"
			<< "The phone number: " << m_contact[it].getPhoneNumber() << "\n"
			<< "The darkest secret: " << m_contact[it].getDarkestSecret() << std::endl;
}

void PhoneBook::Open()
{
	std::string	command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH or EXIT): ";
		if (!std::getline(std::cin, command))
			exit(EXIT_FAILURE);
		if (command == "ADD")
			Add();
		else if (command == "SEARCH")
			Search();
		else if (command == "EXIT")
			break;
	}
}
