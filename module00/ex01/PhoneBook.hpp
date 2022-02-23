#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
private:
	int		m_index;
	int 	m_number_of_records;
	Contact	m_contact[8];

public:
	PhoneBook();
	~PhoneBook();
	void	Open();
	void	Add();
	void	Search();
};

#endif
