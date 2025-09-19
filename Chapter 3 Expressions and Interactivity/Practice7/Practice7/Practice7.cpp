#include <iostream>
#include <iomanip>
int main() {

	//this program ask for sales figures for 3 days. The total
	//sales are calculated and displayed in a table.

	double sale1, sale2, sale3, total;
	//ask user for sales.
	std::cout << "Enter the sales for day 1: ";
	std::cin >> sale1;

	std::cout << "Enter the sales for day 2: ";
	std::cin >> sale2;

	std::cout << "Enter the sales for day 3: ";
	std::cin >> sale3;

	//calculating total.
	total = sale1 + sale2 + sale3;

	std::cout << "Sales Figures" << "\n";
	std::cout << "-------------" << "\n";
	std::cout << std::setprecision(5);

	std::cout << "Day 1: " << std::setw(8) << sale1 << "\n";
	std::cout << "Day 2: " << std::setw(8) << sale2 << "\n";
	std::cout << "Day 3: " << std::setw(8) << sale3 << "\n";
	std::cout << "Total: " << std::setw(8) << total;

	return 0;
}