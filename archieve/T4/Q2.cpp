#include <iostream>
#include <string>
#include <cstring>

class Trivia {
private:
    std::string name, country, game_name;
    int age;
    float score[3];
    char status[20];
public:
    void setParticipant();
    void scoreGained();
    void averageVal();
    void setStatus(double avg);
    void displayResult();
};

void Trivia::setParticipant() {
    std::cout<< "\nEnter Name : ";
    getline(std::cin, name);
    std::cout<< "Enter Country : ";
    getline(std::cin, country);
    std::cout<< "Enter Age : ";
    std::cin>>age;
    std::cin.ignore();
    std::cout<< "Enter Game Name : ";
    getline(std::cin, game_name);
}

void Trivia::scoreGained() {
    for (int i = 0; i < 3; i += 1) {
        std::cout << "\tEnter score " << i + 1 << ": ";
        std::cin >> score[i];
    }
    std::cin.ignore();
}

void Trivia::averageVal() {
    double total_score = 0;
    for (int s : score) {
        total_score += s;
    }
    setStatus(total_score / 3);
}

void Trivia::setStatus(double avg) {
    if (avg >= 80 && avg <= 100) {
        strcpy(status, "Excellent");
    }
    else if (avg >= 60 && avg < 80) {
        strcpy(status , "Great");
    }
    else {
        strcpy(status , "Keep Trying");
    }
}

void Trivia::displayResult() {
    std::cout << "------------------------------\n"
              << "RESULT SCORED\n"
              << "------------------------------\n"
              << "Name: " << name << "\n"
              << "Country: " << country << "\n"
              << "Age: " << age << "\n"
              << "Game name: " << game_name << "\n";
    for (int i = 0; i < 3; i += 1) {
        std::cout << "\tScore " << i + 1 << ": " << score[i] << std::endl;
    }
    std::cout << "\tStatus: " << status << std::endl;
}

int main(void) {
    int loop_num;
    Trivia TV, *TV1 = &TV;

    std::cout << "How many warrior ? ";
    std::cin >> loop_num;
    std::cin.ignore();

    for (int i = 1; i <= loop_num; i += 1) {
        TV1->setParticipant();
        TV1->scoreGained();
        TV1->averageVal();
        TV1->displayResult();
    }
}