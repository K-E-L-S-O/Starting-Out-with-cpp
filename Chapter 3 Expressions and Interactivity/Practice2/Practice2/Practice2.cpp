#include <iostream>
#include <string>
//this program asks the user their name, age and prints a message back
int main()
{
	std::string name;
	int age;

	std::cout << "hello! What is your name? ";
	std::cin >> name;

	std::cout << "how old are you? I'm just one nosy rosy lol ";
	std::cin >> age;

	std::cout << "Hello! " << name << " you are " << age << " years old!";

	return 0;
}
