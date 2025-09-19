#include <iostream>
#include <cmath>
//This program outputs the perimeter of a Rectangle
//P = 2 * (length + width)
int main() {

	double length;
	double width;
	double perimeter;

	std::cout << "This Program outputs the perimeter of a rectangle\n\n";

	std::cout << "Whats the length of a rectangle: ";
	std::cin >> length;

	std::cout << "Whats the width of a rectangle: ";
	std::cin >> width;
	perimeter = 2 * (length + width);
    std::cout << perimeter;

	return 0;
}