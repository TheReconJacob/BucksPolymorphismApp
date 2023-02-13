#pragma once
#include "Vehicle.h"
class VehicleManager
{
private:
	static int count;
	int maxVehicles;
	Vehicle** vehicles;

	bool Add(Vehicle* v)
	{
		if (count >= maxVehicles) return false;

		vehicles[count] = v;
		count++;

		return true;
	};

	void Display()
	{
		for (int i = 0; i < count; i++)
		{
			vehicles[i]->Display();
		}
	}

	int GetCount()
	{
		return count;
	}

	Vehicle** GetList()
	{
		return vehicles;
	}

	VehicleManager(int size)
	{
		count = 0;
		maxVehicles = size;
		vehicles = new Vehicle * [size];
	}
};

