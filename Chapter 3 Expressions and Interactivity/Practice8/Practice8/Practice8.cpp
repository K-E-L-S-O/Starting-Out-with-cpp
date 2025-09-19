#include <iostream>
#include <iomanip>
int main()
{
	//this program uses the fixed manipulator to control
	//how many numbers should show after the decimal
	//in the output.
	double sale1,
		sale2,
		sale3,
		total;

	std::cout << "Enter the sales for day 1: \n";
	std::cin >> sale1;
	std::cout << "Enter the sales for day 2: \n";
	std::cin >> sale2;
	std::cout << "Enter the sales for day 3: \n";
	std::cin >> sale3;

	total = sale1 + sale2 + sale3;

	std::cout << "Sales Figures\n";
	std::cout << "_____________\n";

	std::cout << std::setprecision(2) << std::fixed; //only 2 numbers will show because it is fixed at 2.
	std::cout << "Day 1: " << std::setw(8) << sale1 << "\n";
	std::cout << "Day 2: " << std::setw(8) << sale2 << "\n";
	std::cout << "Day 3: " << std::setw(8) << sale3 << "\n";
	std::cout << "Total: " << total;

	return 0;
}