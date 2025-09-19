#include <iostream>
int main() {
	// This program tracks the inventory of three widget stores
	// that opened at the same time. Each store started with the
	// same number of widgets in inventory. By subtracting the
	// number of widgets each store has sold from its inventory,
	// the current inventory can be calculated.

		//we are storing the numbers in integers
	int begInv,
		store1,
		store2,
		store3,
		sold; //the user will input amount sold and we are going to subtract it from begInv 

	std::cout << "One week ago, 3 new widget stores opened\n"
		<< "at the same time with the same beginning\n"
		<< "inventory.\n";

	//we are asking the user to tell us the beginning inventory
	//so we can store it.
	std::cout << "What was the beginning inventory: ";
	std::cin >> begInv;

	//we are storing store1, store2, and store3 to be 100.
	store1 = store2 = store3 = begInv;

	std::cout << "How many widgets has store 1 sold: ";
	std::cin >> sold;
	store1 -= sold;

	std::cout << "How many widgets has store 2 sold: ";
	std::cin >> sold;
	store2 -= sold;

	std::cout << "How many widgets has store 3 sold: ";
	std::cin >> sold;
	store3 -= sold;
	store3++;

	std::cout << "The current inventory of each store: \n";
	std::cout << store1 << "\n";
	std::cout << store2 << "\n";
	std::cout << store3;

	return 0;
}