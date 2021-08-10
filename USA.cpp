#include "USA.h"

#include <iostream>

USA::USA(int age) : Country(age)
{
	std::cout << "The constructor of USA" << '\n';
}

int USA::get_legal_age_for_purchasing()
{
	return 25;   // magic numbers
}


