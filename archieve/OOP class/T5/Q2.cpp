#include <iostream>
#include <string>

const int class_num = 4;

class Achievement {
private:
    std::string class_name;
    int score;
public:
    void setData(std::string class_name, int score);
    void displayScale();
};

void Achievement::setData(std::string class_name, int score) {
    this->class_name = class_name;
    this->score = score;
}

void Achievement::displayScale() {
    std::cout << "=================================\n"
              << " " << class_name << '\n'
              << "The class Passing Grade Achievement: " << score << "%\n";

    int star_num;
    if (score >= 85) {star_num = 5;}
    else if (score >= 70) {star_num = 4;}
    else if (score >= 60) {star_num = 3;}
    else if (score >= 50) {star_num = 2;}
    else {star_num = 0;}

    if (star_num == 0) {
        std::cout << "Poor achievement" << std::endl;
        return;
    }

    for (int i = 1; i <= star_num; i += 1) {
        std::cout << " *";
    }
    std::cout << std::endl;
}

int main(void) {
    Achievement achievement_s6[class_num];

    std::cout << "--------------------------------------------------------------\n"
              << "                  Enter Class Achievement\n"
              << "--------------------------------------------------------------";

    for (Achievement &class_achievement : achievement_s6) {
        std::string class_name;
        int score;

        std::cout << "\nEnter the class name\t\t: ";
        std::cin >> class_name;
        std::cout << "The class achievement(%)\t: ";
        std::cin >> score;

        class_achievement.setData(class_name, score);
    }

    std::cout << "THE SUMMARY OF UPSR TRIAL EXAM RESULT" << std::endl;

    for (Achievement &class_achievement : achievement_s6) {
        class_achievement.displayScale();
    }
}