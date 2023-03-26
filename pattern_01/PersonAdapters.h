#ifndef PERSON_ADAPTERS_H
#define PERSON_ADAPTERS_H

#include <iostream>

#include "PersonClass.h"
#include "PersonPrints.h"

class PersonMainOutput :public Person
{

	PersonMainPrint* adaptee_ptr;

public:

	~PersonMainOutput()
	{
		if (adaptee_ptr)
			delete adaptee_ptr;
	}

	PersonMainOutput(const std::string& name, const std::string& surname, const std::string& identify_number,
		const std::string& phone_number, const std::string& gmail, unsigned short age)
		:Person(name, surname, identify_number, phone_number, gmail, age),
		adaptee_ptr(new PersonMainPrint())
	{}

	void print_info() override
	{
		adaptee_ptr->print(dynamic_cast<Person*>(this));
	}

};

class PersonContactOutput :public Person, public PersonContactPrint
{

public:

	PersonContactOutput(const std::string& name, const std::string& surname, const std::string& identify_number,
		const std::string& phone_number, const std::string& gmail, unsigned short age)
		:Person(name, surname, identify_number, phone_number, gmail, age)
	{}

	void print_info() override
	{
		this->print(dynamic_cast<Person*>(this));
	}

};

class PersonIdentifyOutput :public Person, public PersonIdentifyPrint
{

public:

	PersonIdentifyOutput(const std::string& name, const std::string& surname, const std::string& identify_number,
		const std::string& phone_number, const std::string& gmail, unsigned short age)
		:Person(name, surname, identify_number, phone_number, gmail, age)
	{}

	void print_info() override
	{
		this->print(dynamic_cast<Person*>(this));
	}

};

#endif // !PERSON_ADAPTERS_H