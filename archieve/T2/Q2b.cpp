#include <iostream>
#include <string>

const int SUBJECT_COUNT = 5;

double getAverage(const int arr[]) {
    double total = 0;
    for (int i = 0; i < SUBJECT_COUNT; i += 1) {
        total += arr[i];
    }
    return (total / SUBJECT_COUNT);
}

char getGrade(double avg_mark) {
    if (avg_mark < 50) {return 'F';}
    if (avg_mark <= 60) {return 'C';}
    if (avg_mark <= 80) {return 'B';}

    return 'A';
}

int main(void) {
    std::string name;
    int mark[SUBJECT_COUNT];
    double avg_mark;
    char grade;

    std::cout << "Enter Name: ";
    std::cin >> name;

    for (int i = 0; i < SUBJECT_COUNT; i += 1) {
        std::cout << "Enter Marks: ";
        std::cin >> mark[i];
    }

    avg_mark = getAverage(mark);
    grade = getGrade(avg_mark);

    std::cout << "\nName: " << name << std::endl
              << "Average: " << avg_mark << std::endl
              << "Grade: " << grade << std::endl;
}
