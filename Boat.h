#pragma once
#include <iostream>
#include <string>
#include "Transport.h"
using namespace std;

class Boat : public Transport
{
public:
	Boat(string _model, int _price, int _year) : Transport(_model, _price, _year) {};
	virtual void TransportSound() const
	{
		cout << "Rumtrtrtrtrtrtrtr" << endl;
	}
};

