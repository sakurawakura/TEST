
// defining the air vehical class
class AirVehicle{

private: // private values for information hiding

    int weight;
    float fuel;
    int numberOfFlights;


public: //publics values that will be used in the code

    AirVehicle(); //the default contsutor

    AirVehicle(int w); //including the weight parameter

    //get & set for weights
    int get_weight() const;  //const doesnt change
    void set_weight(int w);

    float get_fuel() const; //get for fuel

    int set_fuel(); //set for fuel

    int get_numberOfFlights() const;   //get for the number of flights

    void refuel(); //sets the fuel to 100

    virtual void fly(int headwind, int minutes); // the fly method (virtual) which includes headwind and time

};

