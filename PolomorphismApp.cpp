// PolomorphismApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicle.h"
#include "Boat.h"
#include "Car.h"
#include "VehicleManager.h"

Vehicle** DamagedVehicles(Vehicle** vehicles, int *size)
{
    Vehicle** damaged = new Vehicle*[*size];
    int i = 0;
    for (int n = 0; n < *size; n++)
    {
        if (vehicles[n]->damage >= 35)
        {
            damaged[i] = vehicles[n];
            i++;
        }
    }
    *size = i;
    return damaged;
}

int main()
{
    VehicleManager* vehicleManager = new VehicleManager(10);
    // Vehicle* vehicles[5];

    vehicleManager->Add(new Car(1, 35));
    vehicleManager->Add(new Boat(2, 55));
    vehicleManager->Add(new Vehicle(3, 30));
    vehicleManager->Add(new Car(4, 25));
    vehicleManager->Add(new Boat(5, 65));

    vehicleManager->Display();
    int* count = new int(0);
    *count = vehicleManager->GetCount();

    Vehicle** damagedList = DamagedVehicles(vehicleManager->GetList(), count);
    
    std::cout << "\nThe following vehicles have been damaged too much: " << std::endl;
    for (int n = 0; n < *count; n++)
    {
        damagedList[n]->Display();
    }
}