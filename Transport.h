#pragma once
#include <iostream>
#include <string>
using namespace std;

class Transport
{
protected:
	string model;
	int price;
	int year;
public:
	Transport(string _model, int _price, int _year)
	{
		model = _model;
		price = _price;
		year = _year;
	}
	virtual void TransportSound() const
	{
		cout << "Just some transport sound (no specification)." << endl;
	}
	void ShowData() const
	{
		cout << "-----TRANSPORT DATA-----" << endl;
		cout << "Model: " << model << endl;
		cout << "Production year: " << year  << endl;
		cout << "Price: " << "$ " << price << endl;
	}
};

