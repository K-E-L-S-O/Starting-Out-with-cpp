#include <iostream>
#include <iomanip>
//Miles per Gallon
int main()
{

	double gallons;
	double milesDriven;
	double milesPerGallon;

	std::cout << "How many gallons of gas can your car hold: ";
	std::cin >> gallons;

	std::cout << "How many miles can be driven on a full tank: ";
	std::cin >> milesDriven;
	milesPerGallon = milesDriven / gallons;

	std::cout << "Miles driven per gallon of gas is: " << milesPerGallon << "MPG";

	return 0;
}