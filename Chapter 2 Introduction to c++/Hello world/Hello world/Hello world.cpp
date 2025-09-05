#include <iostream> // input/output stream library
#include <string>   // string library



int main()
{
    // declare/define variables here
    // I am typing something
    int num = 10,
        num2 = -15;
    unsigned int unum = 20;
    unsigned short int usnum = 30;
    long int  bigNum = 1000000000;
    long long int llnum = 1000000000000;

    float pi = 3.14;
     
    // character - single quote
    char letter = 'A_';

    // string - double quote
    std::string name = "John Doe";

    // boolean - true/false
    bool isTrue = true;

    // cout - console output
    std::cout << "num: " << num << std::endl;
    std::cout << sizeof(num) << " bytes" << std::endl;
    std::cout << "num2: " << num2 << "\n";
    std::cout << "num + num2 = " << num + num2 << std::endl;

    // close the program
    return 0;
}

/*

Chapter 2 - Introduction to C++ (pg.27)

#        - pre-processor directive
#include - include libraries
<<       - insertion operator
cout     - console output
endl     - end line
\n       - new line
::       - scope resolution operator

*/