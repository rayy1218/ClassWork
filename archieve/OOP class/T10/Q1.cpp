#include <iostream>

int main(void) {
    int subject, num;
    float total_payment = 0, average_payment, *fees;

    std::cout << "How many subjects you have registered: ";
    std::cin >> subject;

    fees = new float[subject];
    for (num = 0; num < subject; num++) {
        std::cout << "Class " << num + 1 << " fees charge: RM";
        std::cin >> fees[num];
        total_payment += fees[num];
    }

    average_payment = total_payment / subject;

    std::cout << "\n===== SEPTEMBER 2016 PAYMENT DETAILS =====" << std::endl;
    std::cout << "Fees charges you have entered:";
    for (int i = 0; i < subject; i += 1) {
        std::cout << fees[i] << "(RM)...";
    }
    std::cout << std::endl;
    std::cout << "Total payment to be made: RM" << total_payment << std::endl;
    std::cout << "Minimum payment (Average of total payment): RM" << average_payment << std::endl;
}
