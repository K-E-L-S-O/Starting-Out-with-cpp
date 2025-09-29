//chapter 3.3 Practice problem pg.142
//this program calculates the average test score and displays it.
#include <iostream>
#include <iomanip>
int main()
{
	double testScore1, testScore2, testScore3, testScore4, testScore5;
	double avg;

	//ask the user what the test scores are.
	std::cout << "Whats test score 1: ";
	std::cin >> testScore1;
	std::cout << "Whats test score 2: ";
	std::cin >> testScore2;
	std::cout << "Whats test score 3: ";
	std::cin >> testScore3;
	std::cout << "Whats test score 4: ";
	std::cin >> testScore4;
	std::cout << "Whats test score 5: ";
	std::cin >> testScore5;

	//calculating average.
	avg = (testScore1 + testScore2 + testScore3 + testScore4 + testScore5) / 5;

	//display
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "The average for the test scores: " << avg;

	return 0;
}