#ifndef PERSON_CLASS_H
#define PERSON_CLASS_H

#include <iostream>

class Person
{

protected:

	std::string     name;
	std::string     surname;
	std::string     identify_number;
	std::string     phone_number;
	std::string     gmail;
	unsigned short  age;

public:

	virtual ~Person() = default;

	Person()
		:name(), surname(), identify_number(), phone_number(),
		gmail(), age()
	{}

	explicit Person(const std::string& name, const std::string& surname, const std::string& identify_number, 
		            const std::string& phone_number, const std::string& gmail, unsigned short age)
		:name(name), surname(surname), identify_number(identify_number), phone_number(phone_number),
		gmail(gmail), age(age)
	{}

	virtual void print_info()
	{
		std::cout <<   "name            -> " << name
			      << "\nsurname         -> " << surname
			      << "\nage             -> " << age
			      << "\nidentify number -> " << identify_number
			      << "\nphone number    -> " << phone_number
			      << "\ngmail           -> " << gmail
			      << "\n";
	}

	const std::string& get_name()            const { return name; }
	const std::string& get_surname()         const { return surname; }
	const std::string& get_identify_number() const { return identify_number; }
	const std::string& get_phone_number()    const { return phone_number; }
	const std::string& get_gmail()           const { return gmail; }
	const unsigned short get_age()           const { return age; }
};

#endif // !PERSON_CLASS_H