#include <iostream>
#include <iomanip>
int main() //this program asks the user for 5 numbers and then prints them to the right.	       
{
	int number1,
		number2,
		number3,
		number4,
		number5;

	std::cout << "enter 5 numbers: " << "\n\n";

	std::cout << "enter the first number: ";
	std::cin >> number1;

	std::cout << "enter the second number: ";
	std::cin >> number2;

	std::cout << "enter the third number: ";
	std::cin >> number3;

	std::cout << "enter the fourth number: ";
	std::cin >> number4;

	std::cout << "enter the fifth number: ";
	std::cin >> number5;

	std::cout << std::setw(6) << number1 << "\n";
	std::cout << std::setw(6) << number2 << "\n";
	std::cout << std::setw(6) << number3 << "\n";
	std::cout << std::setw(6) << number4 << "\n";
	std::cout << std::setw(6) << number5 << "\n";

	return 0;
}