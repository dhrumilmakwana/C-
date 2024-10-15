// Program to show the use of manipulator setw().
#include <iostream>
#include <iomanip>
int main() {
    std::cout << std::setw(10) << "Hello" << std::setw(10) << "World" << std::endl;
    return 0;
}
