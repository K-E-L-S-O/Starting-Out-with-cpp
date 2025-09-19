#include <iostream>
#include <cmath>
//this program converts celsius to fahrenheit
//formula:     f = (c * (9 / 5)) + 32
int main() {

	double celsius;
	double fahrenheit;

	std::cout << "this program converts celsius fahrenheit\n\n";

	std::cout << "Whats the celsius: ";
	std::cin >> celsius;
	fahrenheit = (celsius * 9 / 5) + 32;

	std::cout << "fahrenheit is: " << fahrenheit;

	return 0;
}