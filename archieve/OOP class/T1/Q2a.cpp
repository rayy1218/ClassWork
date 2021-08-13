#include <iostream>
#include <iomanip>

int main(void) {
    const int REGULAR_HOURS = 40;
    const double OVERTIME_PAY_RATE = 24.35, BASE_PAY_RATE = 18.50;

    int work_hours = 0, regular_worked_hours = 0, overtime_worked_hours = 0;
    double regular_wage = 0, overtime_wage = 0, total_wage = 0;

    std::cout << "Please enter total hours you've work ed this week: ";
    std::cin >> work_hours;

    overtime_worked_hours = (work_hours > REGULAR_HOURS) ? (work_hours - REGULAR_HOURS) : 0;
    regular_worked_hours = (work_hours > REGULAR_HOURS) ? REGULAR_HOURS : work_hours;

    regular_wage = regular_worked_hours * BASE_PAY_RATE;
    overtime_wage = overtime_worked_hours * OVERTIME_PAY_RATE;
    total_wage = regular_wage + overtime_wage;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Wages for this week are RM" << total_wage << std::endl;
}