// 2.5 Average Values pg.80
#include <iostream>

int main()
{    
    float num1 = 28;
    float num2 = 32;
    float num3 = 37;
    float num4 = 24;
    float num5 = 33;
    float variables = 5;//the number of variables
    int sum = num1 + num2 + num3 + num4 + num5;//this is adding all the variables
    float average = sum / variables;//this is dividing the sum and variables

    std::cout << "Sum: " << sum << " \n"
              << "The average is " << average;

    return 0;
}