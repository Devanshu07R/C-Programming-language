/*Q23 write a program enter any three number then find biggest no using nested if in c++*/
#include <iostream>

int main() {
    int num1, num2, num3;

    std::cout << "Enter three numbers: ";
    std::cin >> num1 >> num2 >> num3;

    int largest = num1;
    if (num2 > largest) {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }

    std::cout << "The largest number is: " << largest << std::endl;

    return 0;
}