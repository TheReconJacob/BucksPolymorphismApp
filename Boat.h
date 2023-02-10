#pragma once
#include <iostream>
#include "Vehicle.h"

class Boat : public Vehicle
{
protected:
	int id = 0;
private:
	std::string className = "Boat";
	int damage = 0;

public:
	Boat(int instanceId, int instanceDamage)
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

