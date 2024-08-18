#pragma once
#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
	string name;
	int weight;
	int age;
public:
	Animal(string _name, int _weight, int _age)
	{
		name = _name;
		weight = _weight;
		age = _age;
	}
	virtual void AnimalSound() const
	{
		cout << "Just some animal sound (no specification)." << endl;
	}
	string GetName() const
	{
		return name;
	}
	int GetWeight() const
	{
		return weight;
	}
	int GetAge() const
	{
		return age;
	}
	void ShowData()
	{
		cout << "-----ANIMAL DATA-----" << endl;
		cout << "Name: " << name << endl;
		cout << "Weigth: " << weight << " kg" << endl;
		cout << "Age: " << age << " years old" << endl;
	}
};

