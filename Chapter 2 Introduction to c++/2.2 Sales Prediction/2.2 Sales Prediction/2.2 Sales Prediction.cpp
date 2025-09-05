//2.2 Sales Prediction Page 79
#include <iostream>

int main() {
	//8600000 == 8.6e6 
	float sales = 8.6e6,
		percentSales = .58,
		generatedSales = sales * percentSales;

	std::cout << "the generated sales for " << percentSales << " of $" << sales
		      << "m is $" << generatedSales << "m";

	return 0;
}