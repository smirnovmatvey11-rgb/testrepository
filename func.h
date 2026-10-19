#ifndef FUNC_H
#define FUNC_H
#include <string>
#include <vector>

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
        return "rectangle(" + std::to_string(width) + ", " + std::to_string(height) + ")";
    }
};

class Square : public Shape{
public:
    int area() const override{
        return width * width;
    }
    std::string name() const override{
        return "square(" + std::to_string(width) + ", " + std::to_string(width) + ")";
    }
};
template <typename T>
class DynamicArray {
private:
    T* data;
    size_t capacity;
    size_t size;
public:
    void resize(size_t new_size) {
        size_t new_capacity = (new_size - size) * sizeof(T);
        T* new_data = new T[new_capacity];
        
        for (size_t i = 0; i < size; ++i) {
            new_data[i] = data[i];
        }
        
        delete[] data;
        data = new_data;
        capacity = new_capacity;
    }

    DynamicArray() : data(nullptr), capacity(0), size(0) {}
    ~DynamicArray() {
        delete[] data;
    }

    DynamicArray& operator=(const DynamicArray& other) {
        if (this != &other) {
            delete[] data;

            size = other.size;
            capacity = other.capacity;
            if (capacity > 0) {
                data = new T[capacity];
                for (size_t i = 0; i < size; ++i) {
                    data[i] = other.data[i];
                }
            } else {
                data = nullptr;
            }
        }
        return *this;
    }

    T& at(size_t index) {
        return data[index];
    }

    T& operator[](size_t index) {
        return data[index];
    }
    size_t getSize() const { return size; }
    size_t getCapacity() const { return capacity; }
};

#endif