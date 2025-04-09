/*Q22 write a program to print even no between  1 to 50 using while loop in c++*/
#include <iostream>

int main() {
    int i = 2; // Start with the first even number
    std::cout << "Even numbers between 1 to 50 are:\n";
    while (i <= 50) {
        std::cout << i << " ";
        i += 2; // Increment by 2 to get the next even number
    }
    return 0;
}