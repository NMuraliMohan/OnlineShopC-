#include "Country.h"

#include <iostream>

Country::Country(int age) :age_for_purchasing(age)
{
	std::cout << "The constructor of Country class" << '\n';
}

int Country::get_legal_age_for_purchasing()
{
	return age_for_purchasing;
}

