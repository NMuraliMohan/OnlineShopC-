#pragma once
#include "Country.h"

class India : public Country
{
	int population;
	unsigned int aadhar_card;
	public:
		India(int age);
		~India() { std::cout << "The destructor of India" << '\n'; }
		int get_legal_age_for_purchasing();
	
};

