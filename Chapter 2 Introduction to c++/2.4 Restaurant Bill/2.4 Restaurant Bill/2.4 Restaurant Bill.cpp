// 2.4 Restaurant pg.80
#include <iostream>
#include <iomanip>

int main()
{
    float subTotal = 88.67;
    float taxPerc = 6.75;
    float tipPerc = 20;
    float tax = subTotal * (taxPerc / 100);
    float tip = subTotal * (tipPerc / 100);
    float total = subTotal + tax + tip;

    std::cout << std::fixed;
    std::cout << std::setprecision(2) << "Subtotal: $" << subTotal << "\n"
        << "Tax amount: $" << tax << "\n"
        << "Tip amount: $" << tip << "\n"
        << "Total $" << total;

    return 0;
}