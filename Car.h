#pragma once
#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle
{

public:
	Car(int instanceId, int instanceDamage) : Vehicle(instanceId, instanceDamage)
	{
		className = "Car";
	}

	void Display() override
	{
		std::cout << "Name : " << className << std::endl;
		std::cout << "Id: " << id << std::endl;
	}
};

