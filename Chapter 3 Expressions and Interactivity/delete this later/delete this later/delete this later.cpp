 #include <iostream>
 #include <string>

 int main()
 {
	 int age;
	 std::string name;

	 std::cout << "Enter your age: ";
     std::cin >> age;
	 std::cin.ignore();

	 std::cout << "Enter your name: ";
	 std::getline(std::cin, name);

	 std::cout << "Thanks! " << name << " you are " << age << " years old!";

	 return 0;
	 }