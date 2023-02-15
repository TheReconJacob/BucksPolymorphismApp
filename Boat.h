#pragma once
#include <iostream>
#include "Vehicle.h"

class Boat : public Vehicle
{

public:
	Boat(int instanceId, int instanceDamage) : Vehicle(instanceId, instanceDamage)
	{
		className = "Boat";
	}

	void Display() override
	{
		std::cout << "Name : " << className << std::endl;
		std::cout << "Id: " << id << std::endl;
	}
};

