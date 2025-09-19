#include <iostream>
int main() {

	//this program Tracks how many seats are remaining in each theatre
	//and tracks ticket sales.
	int theatre1, theatre2, theatre3, seats, sold;

	std::cout << "All theatres opened with the same number of seats.\n\n";

	std::cout << "How many seats does each theatre have? ";
	std::cin >> seats;

	theatre1 = theatre2 = theatre3 = seats;

	std::cout << "How many tickets did theatre 1 sell: ";
	std::cin >> sold;
	theatre1 = theatre1 - sold;

	std::cout << "How many tickets did theatre 2 sell: ";
	std::cin >> sold;
	theatre2 = theatre2 - sold;

	std::cout << "How many tickets did theatre 3 sell: ";
	std::cin >> sold;
	theatre3 = theatre3 - sold;

	std::cout << "\nRemaining seats:\n";
	std::cout << "theatre 1: " << theatre1 << "\n";
	std::cout << "theatre 2: " << theatre2 << "\n";
	std::cout << "theatre 3: " << theatre3;

	return 0;
}