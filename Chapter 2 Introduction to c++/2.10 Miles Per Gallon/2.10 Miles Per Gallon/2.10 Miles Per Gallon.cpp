// 2.10 Miles Per Gallon pg.81


#include <iostream>

int main() { 
    float milesDriven = 375;
    float gallonsHeld = 15;
    float milesPerGallon = milesDriven / gallonsHeld;

    std::cout << "a car holds " << gallonsHeld << " gallons of gasoline\n"
        << "and can travel " << milesDriven << " miles before refueling.\n"
        << "The number of miles per gallon is " << milesPerGallon;

    return 0;
}