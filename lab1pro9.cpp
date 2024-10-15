// Program to demonstrate function with default argument.
#include <iostream>
void display(int a = 10) {
    std::cout << "Value: " << a << std::endl;
}
int main() {
    display();
    display(20);
    return 0;
}
