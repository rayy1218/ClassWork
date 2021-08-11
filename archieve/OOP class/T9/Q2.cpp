#include <iostream>
#include <string>

class ChoreographyMarks {
private:
    float point, total;
public:
    ChoreographyMarks();
    void setCgPoints();
    friend class Dancer;
};

class InventiveMarks {
private:
    float point, total;
public:
    InventiveMarks();
    void setInvPoints();
    friend class Dancer;
};

class Dancer {
private:
    std::string name;
    int age;
    float final_points, c_points, i_points;
public:
    void setDetails();
    void calcFinalPoint(ChoreographyMarks c_marks, InventiveMarks i_marks);
    int getAge();
    std::string getName();
    void displayScoreDetails();
};

ChoreographyMarks::ChoreographyMarks():
        total(30) {}

void ChoreographyMarks::setCgPoints() {
    std::cout << "Enter Choreography Marks [max:30]\t: ";
    std::cin >> point;
}

InventiveMarks::InventiveMarks():
        total(20) {}

void InventiveMarks::setInvPoints() {
    std::cout << "Enter Inventive Marks [max:20]\t\t: ";
    std::cin >> point;
}

void Dancer::setDetails() {
    std::cout << "\nEnter name\t\t\t\t\t\t\t: ";
    std::cin.ignore();
    std::getline(std::cin, name, '\n');
    std::cin.clear();

    std::cout << "Enter age\t\t\t\t\t\t\t: ";
    std::cin >> age;
}

void Dancer::calcFinalPoint(ChoreographyMarks c_marks, InventiveMarks i_marks) {
    c_points = (c_marks.point / c_marks.total) * 100;
    i_points = (i_marks.point / i_marks.total) * 100;

    final_points = (c_marks.point + i_marks.point) / (c_marks.total + i_marks.total) * 100;
}

int Dancer::getAge() {
    return age;
}

std::string Dancer::getName() {
    return name;
}

void Dancer::displayScoreDetails() {
    std::cout << "\n:::::Score Board:::::" << std::endl;
    std::cout << "Choreography\t: " << c_points << std::endl;
    std::cout << "Inventive\t\t: " << i_points << std::endl;
    std::cout << "Final score\t\t: " << final_points << std::endl;
}

int main(void) {
    int dancer_num;
    std::cout << "Enter number of dancers" << std::endl;
    std::cin >> dancer_num;

    Dancer *dancer_arr = new Dancer[dancer_num];
    ChoreographyMarks c_mark;
    InventiveMarks i_mark;

    for (int i = 0; i < dancer_num; i += 1) {
        dancer_arr[i].setDetails();
        c_mark.setCgPoints();
        i_mark.setInvPoints();

        std::cout << "\n=========================================" << std::endl;
        std::cout << "Dancer #" << i + 1 << std::endl;
        std::cout << "=========================================" << std::endl;
        std::cout << "Name\t= " << dancer_arr[i].getName() << std::endl;
        std::cout << "Age\t\t= " << dancer_arr[i].getAge() << std::endl;
        dancer_arr[i].calcFinalPoint(c_mark, i_mark);
        dancer_arr[i].displayScoreDetails();
        std::cout << "=========================================" << std::endl;
    }

    delete [] dancer_arr;
}
