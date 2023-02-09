#pragma once
#include <iostream>
#include "Vehicle.h"

class Car : public Vehicle
{
protected:
	int id = 0;
private:
	int damage = 0;

public:
	Car(int instanceId, int instanceDamage)
	{
		id = instanceId;
		damage = instanceDamage;
		Display();
	}

	void Display()
	{
		std::cout << "Id: " << id << std::endl;
		std::cout << "Damage: " << damage << std::endl;
	}
};

