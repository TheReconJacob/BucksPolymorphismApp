#pragma once
#include <iostream>
#include "Vehicle.h"

class Boat : public Vehicle
{
protected:
	int id = 0;
private:
	int damage = 0;

public:
	Boat(int instanceId, int instanceDamage)
	{
		id = instanceId;
		damage = instanceDamage;
		Vehicle::Display();
	}

	void Display()
	{
		std::cout << "Id: " << id << std::endl;
		std::cout << "Damage: " << damage << std::endl;
	}
};

