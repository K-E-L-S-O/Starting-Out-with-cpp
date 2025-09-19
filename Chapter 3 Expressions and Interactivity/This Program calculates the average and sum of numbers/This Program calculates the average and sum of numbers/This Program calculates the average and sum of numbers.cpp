#include <iostream>
int main()
//this program calculates the sum and average of values
{
    double num1;
    double num2;
    double num3;
    double sum;
    double average;

    std::cout << "This program calculates the sum and average\n\n";

    std::cout << "Enter first number";
    std::cin >> num1;

    std::cout << "Enter second number";
    std::cin >> num2;

    std::cout << "Enter third number";
    std::cin >> num3;
    sum = num1 + num2 + num3;
    average = sum / 3;

    std::cout << "the sum is: " << sum << " and the average is: " << average;

    return 0;
}