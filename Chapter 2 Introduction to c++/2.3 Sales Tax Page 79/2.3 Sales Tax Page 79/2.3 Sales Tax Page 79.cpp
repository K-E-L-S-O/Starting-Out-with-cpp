// 2.3 Sales Tax Page 79.cpp 

#include <iostream>
#include <iomanip> //input output manipulation

int main()
{
	float purchase = 95;
	float stateTaxPerc = 2;
	float countyTaxPerc = 4;
	float stateTax = purchase * (stateTaxPerc / 100);//.02
	float countyTax = purchase * (countyTaxPerc / 100);//.04
	float total = purchase - stateTax - countyTax;

	std::cout << std::fixed;
	std::cout << "subtotal: $" << std::setprecision(2) << purchase << "\n"
		<< "Statetax: " << stateTaxPerc << "% $" << stateTax << "\n"
		<< "Countytax: " << countyTaxPerc << "% $" << countyTax << "\n"
		<< "Total: $" << total;
		      	         
	return 0;
}

