//Algorithm workbench question 26 page 138.
#include <iostream>
#include <iomanip>
int main()
{
	double total, saleAmount, taxAndAmount, salesTax;

	//Ask user for sale amount and saletax.
	std::cout << "What is the sale amount: ";
	std::cin >> saleAmount;
	std::cout << "\nwhat is the sales tax: ";
	std::cin >> salesTax;

	//tax rate conversion
	salesTax /= 100; //can also be written as salesTax = salesTax / 100;
	//multiply to find total tax amount
	taxAndAmount = salesTax * saleAmount;
	//add tax amount with sales Amount.
	total = saleAmount + taxAndAmount;
	
	//display information.
	std::cout << "___________________" << std::left << std::fixed << std::setprecision(2);	      
	std::cout << "\nSales tax amount: $" << taxAndAmount;
	std::cout << "\nTotal of sale: $" << total ;

	return 0;
}