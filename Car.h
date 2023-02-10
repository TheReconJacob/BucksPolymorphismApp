#pragma once
#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle
{
protected:
	int id = 0;
private:
	std::string className = "Car";
	int damage = 0;

public:
	Car(int instanceId, int instanceDamage)
	{
		id = instanceId;
		damage = instanceDamage;
	}

	void Display()
	{
		std::cout << "Name : " << className << std::endl;
		std::cout << "Id: " << id << std::endl;
		std::cout << "Damage: " << damage << std::endl;
	}
};

