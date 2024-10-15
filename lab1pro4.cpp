// Program to demonstrate the use of a class.
#include <iostream>
class MyClass {
public:
    void display() {
        std::cout << "This is a class demonstration." << std::endl;
    }
};
int main() {
    MyClass obj;
    obj.display();
    return 0;
}
