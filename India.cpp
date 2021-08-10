#include "India.h"

#include <iostream>


India::India(int age) : Country(age)
{
	std::cout << "The constructor of India" << '\n';
}

int India::get_legal_age_for_purchasing()
{
	return -1;
}

