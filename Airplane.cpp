#include "Airplane.h"
#include <iostream>

// defualt contrsutor
Airplane::Airplane() : AirVehicle(), numPassengers(0) {}

// including the weight and # of people
Airplane::Airplane(int w, int p) : AirVehicle(w), numPassengers(p) {}

// get for passengers no need for seet
int Airplane::get_numPassengers() const {
    return numPassengers;
}

// method to reduce passengers
void Airplane::reducePassengers(int x) {


    numPassengers -= x; //when funciton is called then it will decrement the passgengers

    if (numPassengers < 0) { //making sure if negative value then it is set to 0

        numPassengers = 0;
    }
}

//new calculations for fuel (overriding )
void Airplane::fly(int headwind, int minutes) { //pass thourght the headwind and time values


    float fuel = get_fuel();
    int weight = get_weight(); // get updated values 

    if (fuel < 20) { // if the fuel is less than 20 dont allow take off also print aleart statemennt

        std::cout << "Not enough fuel to  fly." << std::endl;
        return;

    }

    float fuel_consumption = 0.25f * minutes;  // when there is no headwind 0.25 gets used

    // if the headwind is more than or 60 then half of fuel is consumed
    if (headwind >= 60) {

        fuel_consumption = 0.5f *  minutes; //50%

    }

    // fuel calculation for each passenger x 0.001% every minute (only do this if more than 0 becuase optimisation) 
    if (numPassengers > 0) {

        fuel_consumption += (0.001f * numPassengers * minutes); // add the result value to total fuel consumed
    }

    fuel -= fuel_consumption;  // calculating the remaining fuel on boardd

    // do a check if there is enough fuel for another flight?? (has to be more than 20)
    if (fuel >=  20) {


        set_fuel(fuel);

        set_numberOfFlights(get_numberOfFlights() + 1); // add a count to the flight number and print fuel remaining
        std::cout << "flight complete the fuel remaining: " << fuel << "%" << std::endl;


    } else { // if less than 20 then dont fly again
        std::cout << "insufficient fuel to complete the flight." << std::endl;
    }
}

