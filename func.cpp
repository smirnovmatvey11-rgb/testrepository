#include "func.h"
#include <iostream>

int sum(long long a, long long b) {
    return a + b;
}

bool isPrime(long long a) {
    for(int i = 1; i < a; i++){
        if(a % i == 0 && a != 0){
            return false;
            break;
        }
    }
    return true;
}

int gcd(long long a, long long b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

long long swap_ptr(long long *a, long long *b){
    long long temp = *a;
    *a = *b;
    return *a, temp;
}

long long wap_ptr(long long &a, long long &b){
    long long temp = a;
    a = b;
    return a, temp;
}

long long sum_arr(const int* arr, int n){
    long long temp;
    for(int i = 0; i < n; i++){
        temp += arr[i];
    }
    return temp;
}

class Shape{
public:
    int height = 1;
    int width = 1;
    virtual int area() const = 0;
    virtual std::string name() {return "GenericType";}
    virtual ~Shape() = default;
};

class Rectangle : public Shape{
public:
    int area(){
        return width * height;
    }
    std::string name(){
        return "rectangle( " + std::to_string(width) + " , " + std::to_string(height) + " )";
    }
};

class Square : public Shape{
public:
    int area(){
        return width * width;
    }
    std::string name(){
        return "square( " + std::to_string(width) + " , " + std::to_string(width) + " )";
    }
};