#include <iostream>
#include <iomanip>
#include <cmath>
//Practice Problem 3.2 pg. 142
//this program calculates how many tickets for each class
//of seats were sold.
int main()
{
	double
		a, //$15.00
		b, //$12.00
		c; //$9.00

	double classA, classB, classC;

	//ask the user how many tickets for each class were sold.
	std::cout << "How many tickets for class A were sold: ";
	std::cin >> classA;
	std::cout << "How many tickets for class B were sold: ";
	std::cin >> classB;
	std::cout << "How many tickets for class C were sold: ";
	std::cin >> classC;

	//calculate.
	a = classA * 15.00;
	b = classB * 12.00;
	c = classC * 9.00;

	//display output
	std::cout << std::showpoint << std::fixed << std::setprecision(2);
	std::cout << "\namount of income generated:\n";
	std::cout << "___________________________\n\n";

	std::cout << "income generated from class A: $" << a << "\n";
	std::cout << "income generated from class B: $" << b << "\n";
	std::cout << "income generated from class C: $" << c << "\n";

	return 0;
}