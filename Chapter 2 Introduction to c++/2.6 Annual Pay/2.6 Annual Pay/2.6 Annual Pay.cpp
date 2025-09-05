// 2.6 Annual Pay pg.80

#include <iostream>

int main() {
    double payAmount = 2200.0;
    double payPeriods = 26;
    double annualPay = payAmount * payPeriods;

    std::cout << "Pay amount: " << payAmount << "\n"
              << "pay Periods: " << payPeriods << "\n"
              << "Annual Pay: " << annualPay;

    return 0;
}