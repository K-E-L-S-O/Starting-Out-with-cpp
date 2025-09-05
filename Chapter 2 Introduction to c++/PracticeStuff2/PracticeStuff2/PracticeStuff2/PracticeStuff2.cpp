#include <iostream>
#include <string>
int main() {


	//I am going to write something to get to know you
	int age = 0;
	std::string name = "";
	std::string favorite_icecream;
	std::string is_water_wet;
	

	std::cout << "Enter your Age \n";
	std::cin >> age;

	std::cout << "your age is " << age << "\n";

	std::cout << "Enter Your Name\n";
	std::cin >> name;


	std::cout << "Your name is " << name;
	

	std::cout << " what is you favorite ice cream?\n";
	std::cin >> favorite_icecream;


	std::cout << "your favorite icecream is " << favorite_icecream << "?\n";
	std::cout << "that's gross!\n";

	std::cout << "and Finally...is water wet?\n";
	std::cin >> is_water_wet;
	std::cin.ignore();
	std::getline(std::cin, is_water_wet);

	std::cout << "you have said\n";
	std::cout << is_water_wet;



	
	



	
 


	return 0;
}