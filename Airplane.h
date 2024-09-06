#include "AirVehicle.h"


// inheriting the airplane form the airvehical again
class Airplane : public AirVehicle {

private:

    int numPassengers; //number of passengers can be private


public:

    Airplane(); //defualt constructor

    Airplane(int w, int p); //including the weight and # people on board

    set_fuel(int);// setting fuel
    

    int get_numPassengers() const; //get for passegerts and no need for set

    void reducePassengers(int x); //method to reduce pasengers & (to 0 if negg)

    void fly(int headwind, int minutes) override; // need to make new calculations so override
};

