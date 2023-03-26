#include <iostream>

#include "PersonClass.h"
#include "PersonAdapters.h"

using std::cout;

int main()
{
	Person* DefaultPersonPtr = new Person("Adam", "Fornwall", "546HAU3520001SS", "+1234213901", "ad010101m@gmail.com", 18);

	Person* MainOutputAdapterPersonPtr = new PersonMainOutput("Adam", "Fornwall", "546HAU3520001SS", "+1234213901", "ad010101m@gmail.com", 18);
	Person* ContactOutputAdapterPersonPtr = new PersonContactOutput("Adam", "Fornwall", "546HAU3520001SS", "+1234213901", "ad010101m@gmail.com", 18);
	Person* IdentifyOutputAdapterPersonPtr = new PersonIdentifyOutput("Adam", "Fornwall", "546HAU3520001SS", "+1234213901", "ad010101m@gmail.com", 18);


	cout << "DEFAULT:\n";
	DefaultPersonPtr->print_info();

	cout << "\nMAIN_OUTPUT_ADAPTER:\n";
	MainOutputAdapterPersonPtr->print_info();

	cout << "\nCONTACT_OUTPUT_ADAPTER:\n";
	ContactOutputAdapterPersonPtr->print_info();

	cout << "\nIDENTIFY_OUTPUT_ADAPTER:\n";
	IdentifyOutputAdapterPersonPtr->print_info();


	delete DefaultPersonPtr;
	delete MainOutputAdapterPersonPtr;
	delete ContactOutputAdapterPersonPtr;
	delete IdentifyOutputAdapterPersonPtr;
}