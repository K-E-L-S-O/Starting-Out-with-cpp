//Programming Challenge 3.5 pg. 142
//male and female percentages.
#include <iostream>
#include <iomanip>
int main() 
{
	double males, females, classTotal;
	double malePercent, femalePercent;

	//ask the user for the number of females and males in the class.
	std::cout << "How many females are in the class: ";
	std::cin >> females;
	std::cout << "How many males are in the class: ";
	std::cin >> males;
	
	classTotal = males + females; //class total.
	malePercent = males / classTotal * 100; //calculating male percentage.
	femalePercent = females / classTotal * 100; //calculating female percentage.

	//displaying.
	std::cout << std::setprecision(2) << "\nFemale percent: " << femalePercent << "%";
	std::cout << "\nMale percent: " << malePercent << "%";

	return 0;
}