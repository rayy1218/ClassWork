#include <iostream>
#include <iomanip>

int main(void) {
    const int NUM_EMPS = 5;
    int index;
    int hours[NUM_EMPS];
    double pay_rate[NUM_EMPS];
    double gross_pay;

    std::cout << "Enter the hours worked and hourly pay rate of " << NUM_EMPS << " employees.\n";

    for (index = 0; index < NUM_EMPS; index += 1) {
        std::cout << "Hours worked by employee #" << index + 1 << ": ";
        std::cin >> hours[index];
        std::cout << "Hourly pay rate of employee #" << index + 1 << ": ";
        std::cin >> pay_rate[index];
    }

    std::cout << "\nHere is the gross pay for every employee:" << std::endl;
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    for (index = 0; index < NUM_EMPS; index += 1) {
        gross_pay = hours[index] * pay_rate[index];
        std::cout << "Employee #" << index + 1 << ": RM " << std::setw(6) << std::right << gross_pay << std::endl;
    }
}