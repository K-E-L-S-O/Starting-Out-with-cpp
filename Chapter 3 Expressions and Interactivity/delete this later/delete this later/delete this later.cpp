#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	double population = 5600.4563728978;

	std::cout << std::left << std::setw(12) << std::showpoint
		<< std::setprecision(8) << population;

	return 0;
}