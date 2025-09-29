#include <iostream>
#include <iomanip>
int main()
{
	const double cost_per_cubic_foot = 0.23;
	const double charge_per_cubic_foot = 0.50;

	double volume, length, width, height, cost, charge, profit;

	//asking the user the dimensions for volume.
	std::cout << "What are the dimensions of the crate (in feet): \n";
	std::cout << "________________________________________________\n";
	std::cout << "length: ";
	std::cin >> length;
	std::cout << "Width: ";
	std::cin >> width;
	std::cout << "Height: ";
	std::cin >> height;

	//calculating volume.
	volume = length * width * height;
	//calculating cost.
	cost = volume * cost_per_cubic_foot;
	//calculating charge.
	charge = volume * charge_per_cubic_foot;
	//calculating profit.
	profit = charge - cost;

	//displaying all information.
	std::cout << std::fixed << std::setprecision(2) << std::showpoint;
	std::cout << "The crates volume is: " << volume << " cubic feet " << "\n";
	std::cout << "The cost of building the crate is: $" << cost << "\n";
	std::cout << "Customers charge is: $" << charge << "\n";
	std::cout << "Profit is: $" << profit;

	return 0;
}