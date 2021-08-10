#include <iostream>

#include "India.h"
#include "USA.h"


// Slicing
void print_dynamic_age(Country& country)
{
	std::cout << country.get_legal_age_for_purchasing() << std::endl;
}

int main()
{
	Country baseCountry(15);
	India myIndia(20);
	Country& reference_to_india = myIndia;
	//USA usa = baseCountry;

	//std::cout << reference_to_india.get_legal_age_for_purchasing() << '\n';

	//print_dynamic_age(reference_to_india);
	USA us(26);   // Derived class

	Country* ptr_to_country = &us;   // The address of derived class

	USA* ptr_to_usa = static_cast<USA*> (ptr_to_country);;

	//std::cout << ptr_to_usa->get_legal_age_for_purchasing() << '\n';


	// Lambda function
	auto display_age = [](Country& country)
	{
		std::cout << country.get_legal_age_for_purchasing() << std::endl;
	};

	display_age(us);
	

	/*
	Tweeter t("Kate", "Gregory", 123, "@gregcons");
	Person* p = &t;
	Tweeter* pt = static_cast<Tweeter*>(p);
	cout << pt->GetName() << endl;
	*/
	//int i = 3;
	//Tweeter* pi = static_cast<Tweeter*>(&i);



}
