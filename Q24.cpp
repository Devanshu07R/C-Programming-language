/*Q24 write a program enter 5 subjects marks then find total percent or grade using nested else if in c++*/
#include <iostream>

int main() {
    int marks[5];
    float total = 0;
    std::cout << "Enter marks for 5 subjects:\n";
    for (int i = 0; i < 5; ++i) {
        std::cout << "Subject " << i + 1 << ": ";
        std::cin >> marks[i];
        total += marks[i];
    }

    float percentage = (total / 5);

    char grade;
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 50) {
        grade = 'E';
    } else {
        grade = 'F';
    }

    std::cout << "Total Percentage: " << percentage << "%" << std::endl;
    std::cout << "Grade: " << grade << std::endl;

    return 0;
}