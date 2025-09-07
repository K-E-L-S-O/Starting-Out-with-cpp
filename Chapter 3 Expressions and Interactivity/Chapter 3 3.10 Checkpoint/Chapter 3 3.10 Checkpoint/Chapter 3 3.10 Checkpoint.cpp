#include <iostream>
#include <cmath>

int main() {

	/* Complete the following program skeleton so it displays 
	the volume of a cylindrical fuel tank.*/

	const double PI = 3.14159;
	double height;
	double radius;

	std::cout << "this program will tell you the volume \n"
		      << "of a cylinder-shaped fuel tank\n\n";

	std::cout << "How tall is the tank: ";
	std::cin >> height;

	std::cout << "What is the radius of the tank: ";
	std::cin >> radius;
	double volume = PI * (pow(radius, 2.0)) * height;

	std::cout << "The volume of a cylindrical fuel tank is: " << volume;

	return 0;
}