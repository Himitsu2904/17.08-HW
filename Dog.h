#pragma once
#include "Animal.h"
#include <string>
#include <iostream>
using namespace std;

class Dog: public Animal
{
public:
	Dog(string _name, int _weight, int _age) : Animal(_name, _weight, _age) {};
	virtual void AnimalSound() const
	{
		cout << "Gav-gav" << endl;
	}
};

