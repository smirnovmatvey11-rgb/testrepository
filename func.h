#ifndef FUNC_H
#define FUNC_H
#include <string>

int sum(long long a, long long b);
bool isPrime(long long a);
int gcd(long long a, long long b);
long long fibonacci(int n);
long long swap_ptr(long long *a, long long *b);
long long wap_ptr(long long &a, long long &b);
long long sum_arr(const int* arr, int n);
class Shape{
public:
    int height = 1;
    int width = 1;
    virtual int area() const = 0;
    virtual std::string name() const {return "GenericType";}
    virtual ~Shape() = default;
};

class Rectangle : public Shape{
public:
    int area() const override{
        return width * height;
    }
    std::string name() const override{
        return "rectangle( " + std::to_string(width) + " , " + std::to_string(height) + " )";
    }
};

class Square : public Shape{
public:
    int area() const override{
        return width * width;
    }
    std::string name() const override{
        return "square( " + std::to_string(width) + " , " + std::to_string(width) + " )";
    }
};

#endif