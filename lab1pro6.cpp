// Program to demonstrate the use of scope resolution operator.
#include <iostream>
int x = 10;
namespace MyNamespace {
    int x = 20;
}
int main() {
    std::cout << "Global x: " << x << std::endl;
    std::cout << "Namespace x: " << MyNamespace::x << std::endl;
    return 0;
}
