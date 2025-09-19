#include <iostream>
#include <string>
#include <iomanip>
int main() {
	//this program prints out 3 columns: Name, Age, and Score.
	int age1 = 23, age2 = 31, age3 = 18;
	int score1 = 89, score2 = 95, score3 = 72;

	std::string name1 = "Alice";
	std::string name2 = "Bob";
	std::string name3 = "Charlie";

	std::cout << "Name" << std::setw(10) << "Age" << std::setw(10) << "Score\n\n";
	std::cout << name1 << std::setw(8) << age1 << std::setw(8) << score1 << "\n";
	std::cout << name2 << std::setw(10) << age2 << std::setw(8) << score2 << "\n";
	std::cout << name3 << std::setw(6) << age3 << std::setw(8) << score3;

	return 0;
}