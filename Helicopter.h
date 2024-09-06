#include "AirVehicle.h"
#include <string>

//defiing the class as a inheritance from the airvehicle
class Helicopter : public AirVehicle {


private:

    std::string name; //the name will be private

public:
    
    Helicopter();  // the deefault constructor

    Helicopter(int w, std::string n); // including the weight and name n
    

    // get and set for name values and fuel
    std::string get_name() const;
    void set_name(std::string n);
    set_fuel(int;)

    void fly(int headwind, int minutes) override; //overiding the fly values need diff function
};



