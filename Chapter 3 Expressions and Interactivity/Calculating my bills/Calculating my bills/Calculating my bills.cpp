#include <iostream>
#include <iomanip>
#include <string>
int main()
{
	//This program calculates my bills for the end of the month.
	double utility, curbsideWaste, xcelEnergy, centerpointEnergy, billsAddedTotal;
	double subtractedFrom;
    double internetAndPhone = 90.00;
	double subtractedFromTotal;
	double sftAndiap;

	std::cout << "Hello Roman, lets get started.\n";
	std::cout << "_____________________________\n\n";

	//User inputs how much we are substracting from first.
	std::cout << "How much are we subtracting from this month?: ";
	std::cin >> subtractedFrom;

	std::cout << "\nsweet! So we are subtracting from " << subtractedFrom << " this month.\n\n"; 
	std::cout << "ok now lets gather how much your bills were this month:\n\n";

	//user is going to input how much bills were this month.
	std::cout << "What was the total of the utility bill this month: ";
	std::cin >> utility;
	std::cout << "What was the total of Curbside Waste: ";
	std::cin >> curbsideWaste;
	std::cout << "What was the total of xcelEnergy: ";
	std::cin >> xcelEnergy;
	std::cout << "What was the total of Centerpoint Energy: ";
	std::cin >> centerpointEnergy;
	
	//calculating the total for bills
	billsAddedTotal = utility + curbsideWaste + xcelEnergy + centerpointEnergy;

	//displaying the total of your bills this month.
	std::cout << std::setprecision(2) << std::fixed;
	std::cout << "The total of your bills this month = " << billsAddedTotal << "\n\n";

	//subtracting total bills from subtracted from.
	std::cout << "Now we are going to subtract " << billsAddedTotal << " from " << subtractedFrom << "\n";
	subtractedFromTotal = subtractedFrom - billsAddedTotal;
	std::cout << "which = " << subtractedFromTotal << "\n\n";

	//adding it with phone and internet bill.
	std::cout << "If we add your phone and internet bill " << internetAndPhone << " with the total from " << subtractedFromTotal << "\n";
	sftAndiap = subtractedFromTotal + internetAndPhone;
	std::cout << "it'll equal: " << sftAndiap << "\n\n";

	//how much we owe.
	std::cout << "So in total you owe Peter: " << sftAndiap << "\n\n";

	//Quick recap of everything.
	std::cout << "Quick Recap\n";
	std::cout << "_____________________\n";

	std::cout << std::left;
	std::cout << "Utiltiy bill: $" << utility << "\n"
		<< "Curbside Waste Bill: $" << curbsideWaste << "\n"
		<< "Xcel energy bill: $" << xcelEnergy << "\n"
		<< "Centerpoint Energy Bill: $" << centerpointEnergy << "\n"
		<< "Bill total: $" << billsAddedTotal << "\n\n";
	
	std::cout << subtractedFrom << " - " << billsAddedTotal << " = " << subtractedFromTotal << "\n";
	std::cout << "Added with phone and internet: " << subtractedFromTotal << " + " << internetAndPhone 
		      << " = " << sftAndiap << "\n\n";

	std::cout << "Total owed = " << sftAndiap;

	return 0;
}