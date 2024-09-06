#include <iostream>
#include "Helicopter.h"

// main method
int main() {

    //making a exmaple helicopter of 5690 weight called Heli
    Helicopter h1(5690, "Heli");

//printing the name fuel and number of flights Before the flight
    std::cout << "Helicopter name: " << h1.get_name() << std::endl;
    std::cout << "Initial fuel level: " << h1.get_fuel() << "%" << std::endl;
    std::cout << "Initial numbers of Flights: " << h1.get_number_flights() << std::endl;

    // simulating the flight (time and headwind) example: 10 min with 45 hedwind
    h1.fly(45, 10); 

    //printing the after-flight valuess
    std::cout << "Fuel after Flight: " << h1.get_fuel() << "%" << std::endl;
    std::cout << "Numbers of flights: " << h1.get_number_flights() << std::endl;

    // testing to see if low feul alert works 60 min with 30 headwind
    h1.fly(30, 60); 

    //print values after the flight fuel should be low now 
    std::cout << "fuel after flight: " << h1.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << h1.get_number_flights() << std::endl;

    return 0;
}
