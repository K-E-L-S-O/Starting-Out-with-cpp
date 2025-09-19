#include <iostream>
#include <cmath>
int main() {
//this program outputs interst 
//formula: I = (p * r * t) / 100

	double principle;
	double rate; //don't enter decimal form just enter percentage
	double time;
	double interest;

	std::cout << "This program outputs interest\n\n";

	std::cout << "Whats the principle: ";
	std::cin >> principle;

	std::cout << "Whats the rate: ";
	std::cin >> rate;

	std::cout << "Whats the time: ";
	std::cin >> time;
	interest = principle * rate * time / 100;

	std::cout << "Interest is: " << interest;

	return 0;
}