// Overview of Chapter 3 Expressions and Interactivity
#include <iostream> // input output stream library
#include <string>   // string library
#include <iomanip>  // input output manipulation library
					// for fixed, setw, setprecision, left/right

int main() {
	std::string name="";
	std::string address="";
	int ans;
	int integer = 2147483647; // range [-2147483648, 2147483647]

	// Get user input for name with cin
	std::cout << "Enter a name: ";
	std::cin >> name;

	// Get user input for address with getline()
	// (Allows inputting longer strings with spaces)
	std::cout << "Enter a address: \n";
	std::getline(std::cin, address);

	// Operator precedence (order of operations) (pg.92)
	//ans = (6 / (-2 + 8) * 3);
	//std::cout << "ans: " << ans << "\n";

	// Example of int variable overflowing
	std::cout << "integer: " << ++integer << "\n";

	// using static_cast, force variable into different data type
	// static_cast<data_type>(value)
	//std::cout << static_cast<int>(1.5) << std::endl;

	// fixed - show decimal point
	// setprecision() - sets significant digits
	std::cout << 1.666 << std::endl;
	std::cout << std::setprecision(2) << static_cast<float>(1.666) << std::endl;
	std::cout << std::fixed << static_cast<float>(1.666) << std::endl;
	

	return 0;
}