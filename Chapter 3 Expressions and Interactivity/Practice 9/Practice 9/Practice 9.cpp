#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
int main()
//random coin flip
{
	const int minValue = 1;
	const int maxValue = 2;
	int headsOrTails;
	unsigned seed = time(0);
	srand(seed);

	std::cout << "Random coin flip:\n";
	std::cout << "1 = Heads\n";
	std::cout << "2 = Tails";

	headsOrTails = (rand() % (maxValue - minValue + 1)) + minValue;

	std::cout << "\ncoin flip...\n";
	std::cout << headsOrTails;

	return 0;
}