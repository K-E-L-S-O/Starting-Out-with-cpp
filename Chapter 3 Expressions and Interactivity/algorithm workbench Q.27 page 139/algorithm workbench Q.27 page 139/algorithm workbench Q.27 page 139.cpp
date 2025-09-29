//Algorithm Workbench question 27 page 139.
#include <iostream>
#include <iomanip>
int main()
{
	int score1, score2, score3, avg;

	//ask user for scores.
	std::cout << "What is score1: \n";
	std::cin >> score1;
	std::cout << "What is score2: \n";
	std::cin >> score2;
	std::cout << "What is score3: \n";
	std::cin >> score3;

	//calculate average.
	avg = (score1 + score2 + score3) / 3;

	//display information.
	std::cout << "The average for all three scores are: " << avg;

	return 0;
}