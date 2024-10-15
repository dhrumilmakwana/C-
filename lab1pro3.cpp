// Program to swap two variables.
#include <iostream>
int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    std::swap(a, b);
    std::cout << "Swapped values: " << a << " " << b << std::endl;
    return 0;
}
