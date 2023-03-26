#ifndef PERSON_PRINTS_H
#define PERSON_PRINTS_H

#include <iostream>

#include "PersonClass.h"

class PersonMainPrint
{

public:

	void print(Person* person_ptr) const
	{
		std::cout <<   "name            -> " << person_ptr->get_name()
			      << "\nsurname         -> " << person_ptr->get_surname()
			      << "\nage             -> " << person_ptr->get_age()
			      << "\n";
	}

};

class PersonContactPrint
{

public:

	void print(Person* person_ptr) const
	{
		std::cout <<   "name            -> " << person_ptr->get_name()
			      << "\nsurname         -> " << person_ptr->get_surname()
			      << "\nphone number    -> " << person_ptr->get_phone_number()
			      << "\ngmail           -> " << person_ptr->get_gmail()
			      << "\n";
	}

};

class PersonIdentifyPrint
{

public:

	void print(Person* person_ptr) const
	{
		std::cout <<   "name            -> " << person_ptr->get_name()
			      << "\nsurname         -> " << person_ptr->get_surname()
			      << "\nage             -> " << person_ptr->get_age()
			      << "\nidentify number -> " << person_ptr->get_identify_number()
			      << "\n";
	}

};

#endif // !PERSON_PRINTS_H