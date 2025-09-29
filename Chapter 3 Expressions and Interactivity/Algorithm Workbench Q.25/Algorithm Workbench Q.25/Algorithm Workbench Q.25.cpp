#include <iostream> //this is from algorithm workbench question 25 page 138.
int main()
{
	double maximumCredit, creditUsed, creditLeft;

	std::cout << "What is the maximum amount of credit: ";
	std::cin >> maximumCredit;
	std::cout << "\nHow much credit was used: ";
	std::cin >> creditUsed;

	//calculation
	creditLeft = maximumCredit - creditUsed;

	//display.
	std::cout << "\nYou have $" << creditLeft << " left in credit.";

	return 0;
}