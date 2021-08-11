#include <iostream>

const int SUBJECT_COUNT = 5;

struct Student {
    char name[30], grade;
    float marks[SUBJECT_COUNT], avg;
};

float getAverage(const float arr[]) {
    double total = 0;
    for (int i = 0; i < SUBJECT_COUNT; i += 1) {
        total += arr[i];
    }
    return (total / SUBJECT_COUNT);
}

char getGrade(float avg_mark) {
    if (avg_mark < 50) {return 'F';}
    if (avg_mark <= 60) {return 'C';}
    if (avg_mark <= 80) {return 'B';}

    return 'A';
}

int main(void) {
    Student s1;

    std::cout << "Enter Name: ";
    std::cin >> s1.name;

    for (int i = 0; i < SUBJECT_COUNT; i += 1) {
        std::cout << "Enter Marks: ";
        std::cin >> s1.marks[i];
    }

    s1.avg = getAverage(s1.marks);
    s1.grade = getGrade(s1.avg);

    std::cout << "\nName: " << s1.name << std::endl
              << "Average: " << s1.avg << std::endl
              << "Grade: " << s1.grade << std::endl;
}