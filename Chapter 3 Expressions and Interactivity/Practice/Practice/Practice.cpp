#include <iostream>
#include <cmath>
#include <string>

int main() {

	//I think I am making a madlib about michael Jackson and diddy?? I think lol...wait no lol...I am not sure
	/*Michael jackson did a cha cha slide on (noun)
	and then he whipped his (adjective) to (verb) through a pile of giant wizard poo poo.*/
	std::string noun;
	std::string adjective;
	std::string verb;

	std::cout << "Enter a noun: ";
	std::cin >> noun;
	
	std::cout << "Enter a adjective: ";
	std::cin >> adjective;

	std::cout << "Enter a verb: ";
	std::cin >> verb;

	//the story goes...

	std::cout << "michael Jackson did a cha cha slide on a " << noun << ".\n"
		<< "And then he whipped his " << adjective << " to " << verb << "\n"
		<< " through a pile of giant wizard poo poo!";
		    	      

	return 0;
}