#pragma once
#include <iostream>

class Country
{
private:
	int age_for_purchasing;
public:
	Country(int age);
	virtual ~Country(){ std::cout << "The destructor of Country class " << '\n'; }
	virtual int get_legal_age_for_purchasing();
};
