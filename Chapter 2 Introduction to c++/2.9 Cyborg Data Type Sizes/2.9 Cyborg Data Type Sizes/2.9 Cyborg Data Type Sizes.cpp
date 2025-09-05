// 2.9 Cyborg Data Type Sizes pg.81
#include <iostream>

int main() {
     
	std::cout << "the number of bytes used in data type (character): " << sizeof(char) << "\n"
		<< "the number of bytes used in data type (integer): " << sizeof(int) << "\n"
		<< "the number of bytes used in data type (float): " << sizeof(float) << "\n"
		<< "the number of bytes used in data type (double): " << sizeof(double) << "\n";
	
	return 0;
}