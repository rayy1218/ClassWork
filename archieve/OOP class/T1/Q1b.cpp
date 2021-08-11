#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    float day1, day2, total;

    cout << "Enter the sales for day 1: ";
    cin >> day1;

    cout << "Enter the sales for day 2: ";
    cin >> day2;

    total = day1 + day2;

    cout << "QTech Sdn Bhd Sales figures for 2 days\n"
         << "Day 1 : " << day1 << std::endl
         << "Day 2 : " << day2 << std::endl
         << "Total : " << total << std:: endl;
}