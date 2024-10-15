// Program to demonstrate function overloading with same parameters.
#include <iostream>
class Display {
public:
    void show(int a) {
        std::cout << "Integer: " << a << std::endl;
    }
    void show(double b) {
        std::cout << "Double: " << b << std::endl;
    }
};
int main() {
    Display obj;
    obj.show(10);
    obj.show(10.5);
    return 0;
}
