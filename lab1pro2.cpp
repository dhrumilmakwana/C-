// Program to calculate average of three numbers.
#include <iostream>
int main() {
    float a, b, c, average;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;
    average = (a + b + c) / 3;
    std::cout << "Average: " << average << std::endl;
    return 0;
}
