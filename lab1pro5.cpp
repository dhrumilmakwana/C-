// Program to demonstrate the use of a reference variable.
#include <iostream>
int main() {
    int a = 10;
    int& ref = a;
    std::cout << "Value of a: " << a << ", Reference ref: " << ref << std::endl;
    ref = 20;
    std::cout << "New value of a: " << a << std::endl;
    return 0;
}
