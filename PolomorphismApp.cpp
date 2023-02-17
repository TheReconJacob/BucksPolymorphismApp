// PolomorphismApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicle.h"
#include "Boat.h"
#include "Car.h"
#include "VehicleManager.h"


VehicleManager* vehicleManager = new VehicleManager(10);

Vehicle** DamagedVehicles(Vehicle** vehicles, int *size)
{
    Vehicle** damaged = new Vehicle*[*size];
    for (int i = 0; i < *size; i++)
    {
        if (vehicles[i]->damage >= 35)
        {
            vehicleManager->DisplayDamaged(vehicles[i]);
        }
    }
    return damaged;
}

int main()
{
    // Vehicle* vehicles[5];

    vehicleManager->Add(new Car(1, 35));
    vehicleManager->Add(new Boat(2, 55));
    vehicleManager->Add(new Vehicle(3, 30));
    vehicleManager->Add(new Car(4, 25));
    vehicleManager->Add(new Boat(5, 65));

    vehicleManager->Display();
    int* count = new int(0);
    *count = vehicleManager->GetCount();

    std::cout << "\nThe following vehicles have been damaged too much: " << std::endl;
    DamagedVehicles(vehicleManager->GetList(), count);
}