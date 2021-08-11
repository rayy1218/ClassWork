#include <iostream>
#include <string>

class Participant {
protected:
    std::string name, location;
    int age;
public:
    Participant();
};

class Progress {
protected:
    std::string date[3];
    float rate[3];
    char grade;
public:
    void markEntry();
    void setGrade(float avg_rate);
};

class Result : public Participant, public Progress {
private:
    std::string prize;
public:
    void setDetails();
    void display();
    friend void summary(Result result_arr[], int size);
};

Participant::Participant() {
    std::cout << "\tParticipant Details" << std::endl;
}

void Progress::markEntry() {
    float total_rate;
    std::cout << "\n-----------------------------------------" << std::endl;
    std::cout << "RECITAL PROGRESS DETAILS" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;

    for (int i = 0; i < 3; i += 1) {
        std::cout << "Enter date (dd/mm/yy): ";
        std::cin >> date[i];

        do {
            std::cout << "Enter rating (between 1-5): ";
            std::cin >> rate[i];
        }
        while (!(rate[i] >= 1 && rate[i] <= 5));

        total_rate += rate[i];
    }

    setGrade(total_rate / 3);
}

void Progress::setGrade(float avg_rate) {
    if (avg_rate >= 4) {
        grade = 'A';
    }
    else if (avg_rate >= 3) {
        grade = 'B';
    }
    else {
        grade = 'C';
    }
}

void Result::setDetails() {
    std::cout << "\nEnter Name\t\t: ";
    std::cin.clear();
    std::cin >> name;
    std::cin.clear();

    std::cout << "Enter Location\t: ";
    std::cin >> location;

    std::cout << "Enter Age\t\t: ";
    std::cin >> age;
}

void Result::display() {
    std::cout << "\n-----------------------------------------" << std::endl;
    std::cout << "              RESULT SLIP" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Location: " << location << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Rating 1: " << rate[0] << std::endl;
    std::cout << "Rating 2: " << rate[1] << std::endl;
    std::cout << "Rating 3: " << rate[2] << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Congrats, you can claim " << prize << std::endl;
}

void summary(Result result_arr[], int size)  {
    int a_count = 0, b_count = 0, c_count = 0;
    for (int i = 0; i < size; i++) {
        switch (result_arr[i].grade) {
            case 'A': a_count += 1; break;
            case 'B': b_count += 1; break;
            case 'C': c_count += 1; break;
        }
    }

    std::cout << "\n====================================" << std::endl;
    std::cout << "          Summary Results" << std::endl;
    std::cout << "====================================" << std::endl;

    char alphabet = 'A';
    for (int star_count : {a_count, b_count, c_count}) {
        std::string output = "Grade ";
        output += alphabet;
        output += ": ";
        for (int i = 1; i <= star_count; i += 1) {output += '*';}
        std::cout << output << std::endl;

        alphabet++;
    }
}

int main(void) {
    int participant_num;

    std::cout << "Enter number of participants: ";
    std::cin >> participant_num;

    Result *stud1 = new Result[participant_num];
    for (int i = 0; i < participant_num; i += 1) {
        stud1[i].setDetails();
        stud1[i].markEntry();
        stud1[i].display();
    }

    summary(stud1, participant_num);
}
