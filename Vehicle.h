#pragma once
#include <iostream>

class Vehicle
{
protected:
	int id = 0;
private:
	int damage = 0;

public:
	Vehicle()
	{}

	Vehicle(int instanceId, int instanceDamage)
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

