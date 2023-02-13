// PolomorphismApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Vehicle.h"
#include "Boat.h"
#include "Car.h"
#include "VehicleManager.h"

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
    //// Boat b1 = Boat(2, 50);
    //// Car c1 = Car(3, 40);

    //for (Vehicle* vehicle : vehicles)
    // {
    //     vehicle->Display();
    // }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
