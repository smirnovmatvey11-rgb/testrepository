#include <iostream>
#include "func.h"
int main(){
    int a = 2, b = 3;
    std::cin >> a >> b;
    std::cout << sum(a, b) << "\n";
    std::cout << isPrime(a) << "\n";
    std::cout << gcd(a, b) << "\n";
    std::cout << fibonacci(a) << "\n";
    Rectangle rec;
    Square sq;
    rec.height = 5;
    rec.width = 3;
    sq.width = 4;
    std::cout << rec.area() << "\n";
    std::cout << rec.name() << "\n";
    std::cout << sq.area() << "\n"; 
    std::cout << sq.name() << "\n";
}