#include "Helicopter.h"
#include <iostream>

//the defualt constuctor inheriting the airvehicle and name value
Helicopter::Helicopter() : AirVehicle(), name("") {}

//including the name and weight values
Helicopter::Helicopter(int w, std::string n)  : AirVehicle(w), name(n) {}

// get for name
std::string Helicopter::get_name() const {

    return name;
}

// set for name
void Helicopter::set_name(std::string n) {

    name = n;


}

// making a new function for the fly method -> overriding
void Helicopter::fly(int headwind, int minutes) {

    float fuel = get_fuel();
    int weight = get_weight(); //getting the newest fuel and weight values for calculation

// alert if the fuel is less than 20kg = no take off
    if (fuel < 20) {
        std::cout << "Not enough fuel to take off and fly." << std::endl;
        return;
    }

    // the fuel consumption with no headwind (18%)
    float fuel_consumption = 0.18f * minutes;

    // if the headwind is 40 or more then (40% used)
    if (headwind >= 40) {

        fuel_consumption = 0.4f * minutes;
    }

    // if the weight is higher than 5670kg then 0.01% more fuel used for every extra kilo
    if (weight > 5670) {
        int extra_weight = weight - 5670;
        fuel_consumption += (0.01f * extra_weight * minutes);
    }

    // calcing the new fule level
    fuel -= fuel_consumption;

    // caclullating for a new flight after landing
    if (fuel >= 20) { // only continue if theres still mroe than 20kg fuel left

        set_fuel(fuel);
        set_numberOfFlights(get_numberOfFlights() + 1); // add a flight to the counter
        std::cout << "Flight is completed the fuel remaining: " << fuel << "%" << std::endl; //print vlaues


    } else { // if its less than 20 then aleart
        std::cout << "insufficient fuel to complete the flight." << std::endl;
    }
}


