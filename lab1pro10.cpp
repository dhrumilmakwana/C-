// Program to demonstrate function overloading with different parameters.
#include <iostream>
void display(int a) {
    std::cout << "Integer: " << a << std::endl;
}
void display(double b) {
    std::cout << "Double: " << b << std::endl;
}
int main() {
    display(10);
    display(10.5);
    return 0;
}
