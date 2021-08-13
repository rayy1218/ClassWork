#include <iostream>
#include <iomanip>
#include <vector>

double average(double *temp_arr, int day_num);

int main(void) {
    int day_num;

    std::cout << "How many days would you like to record the temperature ? ";
    std::cin >> day_num;
    std::cout << std::endl;

    double *temperature_by_day = new double[day_num];
    double avg_temperature_by_day;
    for (int i = 0; i < day_num; i += 1) {
        std::cout << "Enter temperature day " << i + 1 << " : ";
        std::cin >> *(temperature_by_day + i);
    }
    avg_temperature_by_day = avg_temperature_by_day(temperature_by_day, day_num);

    std::cout << "\nAverage temperature: "
              << std::fixed << std::showpoint << std::setprecision(2)
              << avg_temperature_by_day << " deg Celcius" << std::endl;

    delete temperature_by_day;
}

double average(double *temp_arr, int day_num) {
    double total_temp = 0;

    for (int i = 0; i < day_num; i += 1) {
        total_temp = temp_arr[i];
    }
    return total_temp / day_num;
}