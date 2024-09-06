#include <iostream>
#include "AirVehicle.h"

int main() {
    // defining the airvehicel object

    AirVehicle av1(500); //setting it to 500 weight


// printing the starting fuel and the starting # of flights
    std::cout << "Initial fuel: " << av1.get_fuel() << "%" << std::endl;
    std::cout << "Initial number of flights: " << av1.get_numberOfFlights() << std::endl;

    //simiulating the flying

    av1.fly(10, 60); // time is 60 minutes and wind is set to 10

    //printing the results of after simulation
    std::cout << "Fuel after flight: " << av1.get_fuel() << "%" << std::endl;
    std::cout << "Number of flights: " << av1.get_numberOfFlights() << std::endl;

    // set the fuel back to 100
    av1.refuel();

    //print it 
    std::cout << "Fuel after refuel: " << av1.get_fuel() << "%" << std::endl;

    return 0;
}


