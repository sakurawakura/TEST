#include <iostream>
#include "Airplane.h"


//  main method
int main() {


    // and example airplane a1 with the weight 10k and 200 people on board
    Airplane a1(10000, 200);


// printing all the inital values
    std::cout << "Initial Fuel: " << a1.get_fuel() << "%" << std::endl;
    std::cout << "Initial Number of Passengers: " << a1.get_numPassengers() << std::endl;
    std::cout << "Initial Number of Flights: " << a1.get_numberOfFlights() << std::endl;


    // simulating the flight. 

    a1.fly(65, 120); // flying the plan for 2 hours and with headwind of 65

    //printing the values of ther flight. 
    std::cout << "fuel after flight: " << a1.get_fuel() << "%" << std::endl;
    std::cout << "Number of Flights: " << a1.get_numberOfFlights() << std::endl;

    // reduce passengers method check
    a1.reducePassengers(50); // checking to see if reduing 50 passengers will work

    // now print the new # of passengers after they leave
    std::cout << "number of Passengers now: " << a1.get_numPassengers() << std::endl;

    // try to fly a new flight with reduced passegers (check to see if #passenger x 0.001% x time function works)

    a1.fly(30, 60); // simulate a new flight for 1 hour and 30 headwind

    //print the values after fligth
    std::cout << "Fuel left after flight: " << a1.get_fuel() << "%" << std::endl;
    std::cout << "number of Flights: " << a1.get_numberOfFlights() << std::endl;

    return 0;
}


