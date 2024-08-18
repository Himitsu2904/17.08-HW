#include <iostream>
#include <string>
#include "Dog.h"
#include "Cat.h"
#include "Elephant.h"
#include "Car.h"
#include "Boat.h"
#include "Plane.h"
using namespace std;

int main()
{
	Animal* animal = nullptr;
	cout<<"Choose an animal to sound:\n1. Dog\n2. Cat\n3. Elephant\n";
	int choice = 0;
	while (choice != 1 && choice != 2 && choice != 3)
	{
		cout << "Your choice: ";
		cin >> choice;
	}
	switch (choice)
	{
	case 1:
		animal = new Dog("Sharik", 15, 6);
		break;
	case 2:
		animal = new Cat("Barsik", 4, 2);
		break;
	case 3:
		animal = new Elephant("Borya", 2300, 15);
		break;
	}
	animal->AnimalSound();
	animal->ShowData();
	cout << "-------------------------------------------------------------\n";
	Transport* transport = nullptr;
	cout << "Choose a transport to sound:\n1. Car\n2. Boat\n3. Plane\n";
	choice = 0;
	while (choice != 1 && choice != 2 && choice != 3)
	{
		cout << "Your choice: ";
		cin >> choice;
	}
	switch (choice)
	{
	case 1:
		transport = new Car("BMV", 43000, 2022);
		break;
	case 2:
		transport = new Boat("Barque Drivet", 8000, 1951);
		break;
	case 3:
		transport = new Plane("Cessna Citation CJ4", 12750000, 2023);
		break;
	}
	transport->TransportSound();
	transport->ShowData();
}