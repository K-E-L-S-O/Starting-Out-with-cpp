#include <iostream>
#include <cmath>
//this program asks the user for the radius of a circle and
//calculates the area using the formula area = PI * r^2
int main()
{
	const double pi = 3.14; //PI is 3.14
	double radius;
	double area;

	std::cout << "what is the radius of a circle?";
	std::cin >> radius;
	area = pi * pow(radius, 2.0);//pow is usually not recommended when working with smaller numbers

	std::cout << "the area of a circle is: " << area;

	return 0;
}