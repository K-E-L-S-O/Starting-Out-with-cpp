// 2.8 Total Purchase
#include <iostream>

int main()
{
	float item1 = 15.95;
	float item2 = 24.95;
	float item3 = 6.95;
	float item4 = 12.95;
	float item5 = 3.95;
	float subTotal = item1 + item2 + item3 + item4 + item5;
	int tax = 7;
	float salesTax = subTotal * (tax / 100.f);
	float total = subTotal + salesTax;
	
	std::cout 
		<< "Item1: $" << item1 << " \n"
		<< "Item2: $" << item2 << " \n"
		<< "Item3: $" << item3 << " \n"
		<< "Item4: $" << item4 << " \n"
		<< "Item5: $" << item5 << " \n";
	std::cout
		<< "Subtotal: $" << subTotal << "\n"
		<< "Tax: " << tax << "%\n"
		<< "Salestax: $" << salesTax << "\n"
		<< "Total: $" << total;
				     
	return 0;
}