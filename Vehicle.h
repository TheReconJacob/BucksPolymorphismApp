#pragma once
#include <iostream>

class Vehicle
{
protected:
	int id = 0;
	std::string className = "Vehicle";
private:
	int damage = 0;

public:
	Vehicle() = default;

	Vehicle(int instanceId, int instanceDamage)
	{
		id = instanceId;
		damage = instanceDamage;
	}

	virtual void Display()
	{
		//Adding virtual to the display function tells the vehicle class to call the display
		//function of a child class that is specified when creating an instance for one of the elements
		//in the array.
		std::cout << "Name : " << className << std::endl;
		std::cout << "Id: " << id << std::endl;
	}

	friend Vehicle** DamagedVehicles(Vehicle** vehicles, int *size);
};

