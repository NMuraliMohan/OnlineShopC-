#pragma once
#include "Country.h"
class USA :public Country
{
	int population;
	unsigned int SSN;
public:
	USA(int age);
	~USA(){ std::cout << "The destructor of USA" << '\n'; }
	int get_legal_age_for_purchasing();
};

