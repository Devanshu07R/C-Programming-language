/*Q21 write a program to print even no between  1 to 100 using for loop in c++*/
#include <iostream>

int main() {
    std::cout << "Even numbers between 1 to 100 are:\n";
    for (int i = 2; i <= 100; i += 2) {
        std::cout << i << " ";
    }
    return 0;
}