#include <iostream>
int main() {

	double pounds,
		kilograms;

/*Write code here that prompts the user
 to enter his or her weight and reads
 the input into the pounds variable*/

	std::cout << "enter your weight in lb: \n";
	std::cin >> pounds;

	//pounds to kilograms conversion
	kilograms = pounds / 2.20462;

	//this code here displays the conversion
	std::cout << "Conversion to kilograms: " << kilograms;

	return 0;
}