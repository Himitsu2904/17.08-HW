#pragma once
#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;

class Elephant : public Animal
{
public:
	Elephant(string _name, int _weight, int _age) : Animal(_name, _weight, _age) {};
	virtual void AnimalSound() const
	{
		cout << "Bahruuuuuuhhhhaaaaa" << endl;
	}
};

