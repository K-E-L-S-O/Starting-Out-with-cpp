//Programming Challenge 3.6 pg. 143
//Ingredient Adjuster
#include <iostream>
#include <iomanip>
int main()
{
	//all Variables needed.
	const double original_batch_produced = 48;
	const double cups_of_sugar = 1.5;
	const double cup_of_butter = 1;
	const double cups_of_flour = 2.75;
	double cookies, cupsOfSugar, cupsOfButter, cupsOfFlour;

	//ask the user the amount of cookies they would like to make.
	std::cout << "How many cookies would you like to make: ";
	std::cin >> cookies;

	//calculating cups of sugar needed for x amount of cookies.
	cupsOfSugar = cups_of_sugar / original_batch_produced * cookies;
	//calculating cups of butter needed for x amount of cookies.
	cupsOfButter = cup_of_butter / original_batch_produced * cookies;
	//calculating cups of flour needed for x amount of cookies.
	cupsOfFlour = cups_of_sugar / original_batch_produced * cookies;

	//displaying how many cups is needed for each ingredient.
	std::cout << std::setprecision(3);
	std::cout << "\nCups of sugar needed: " << cupsOfSugar;
	std::cout << "\nCups of butter needed: " << cupsOfButter;
	std::cout << "\nCups of flour needed: " << cupsOfFlour;

	return 0;
}