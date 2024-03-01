#include <iostream>

void Print(int x) {
    std::cout << "int: " << x << std::endl;
}

void Print(double x) {
    
     << "double: " << x << std::endl;
}

int main() {
    Print(2);
    Print(2.1);

    return 0;
}