#include "AirVehicle.h"

// the default constructor (fully feuled)
AirVehicle::AirVehicle() : weight(0), fuel(100), number_flights(0) {}

// the contrsuctor with the weight values included
AirVehicle::AirVehicle(int w) : weight(w), fuel(100), number_flights(0) {}

// get for weight
int AirVehicle::get_weight() const {
    return weight;
}

// get for fuel
float AirVehicle::get_fuel() const {
    return fuel;
}

// get for # of flights
int AirVehicle::get_number_flights() const {
    return number_flights;
}

// set for weight
void AirVehicle::set_weight(int w) {
    weight = w;
}

// resetting to 100 fuel %
void AirVehicle::refuel() {
    fuel = 100;
}

// the fly method which increments the flight by 1
void AirVehicle::fly(int headwind, int minutes) {

    number_flights++; // increment
}
