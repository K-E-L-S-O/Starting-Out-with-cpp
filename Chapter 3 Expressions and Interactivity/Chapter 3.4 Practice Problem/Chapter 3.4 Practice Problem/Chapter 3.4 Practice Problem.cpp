//Chapter 3.4 Program Challenge. Pg. 142
//This program calculates the average rainfall of three months.
#include <iostream>
#include <iomanip>
#include <string>
int main()
{
	//Storing our information months and rainfall.
	std::string month1;
	std::string month2;
	std::string month3;
	double rain1, rain2, rain3;
	double avg;

	//ask the user the name of month and amount of rain in inches.
	std::cout << "Enter the name of a month: ";
	std::cin >> month1;
	std::cout << "What's the amount of rain in inches that fell in that month: ";
	std::cin >> rain1;

	std::cout << "Enter the name of another month: ";
	std::cin >> month2;
	std::cout << "What's the amount of rain in inches that fell in that month: ";
	std::cin >> rain2;

	std::cout << "Enter the name of another month: ";
	std::cin >> month3;
	std::cout << "What's the amount of rain in inches that fell in that month: ";
	std::cin >> rain3;

	//the average rainfall calculation for each month.
	avg = (rain1 + rain2 + rain3) / 3;

	//Displaying all the information.
	std::cout << "The average rainfall for\n"
		      << std::fixed << std::setprecision(2) 
		      << month1 << " " << month2 << " and " << month3 << " is " << avg << "in";

	return 0;
}