// Program to perform swap operation using call by value.
#include <iostream>
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 5, y = 10;
    swap(x, y);
    std::cout << "x: " << x << ", y: " << y << std::endl;
    return 0;
}
