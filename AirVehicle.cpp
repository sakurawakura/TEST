#include "AirVehicle.h"

// the default constructor (fully feuled)
AirVehicle::AirVehicle() : weight(0), fuel(100), numberOfFlights(0) {}

// the contrsuctor with the weight values included
AirVehicle::AirVehicle(int w) : weight(w), fuel(100), numberOfFlights(0) {}

// get for weight
int AirVehicle::get_weight() const {
    return weight;
}

// get for fuel
float AirVehicle::get_fuel() const {
    return fuel;
}

// get for # of flights
int AirVehicle::get_numberOfFlights() const {
    return numberOfFlights;
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

    numberOfFlights++; // increment
}

