#include <iostream>
#include "func.h"
#include <cassert>
int main(){
    assert(sum(2, 3) == 5);
    assert(isPrime(13) == true);
    assert(isPrime(24) == false);
    assert(gcd(2, 4) == 2);
    assert(fibonacci(8) == 21);


    //egfrvew
    long long a = 3, b = 5;
    const int arr[5] = {1, 2, 3, 4, 5};
    swap_ptr(&a , &b);
    assert(b == 3);
    wap_ptr(a, b);
    assert(a == 3);
    assert(sum_arr(arr, 5) == 15);
    Rectangle rec;
    Square sq;
    rec.height = 5;
    rec.width = 3;
    sq.width = 4;
    assert(rec.area() == 15);
    assert(rec.name() == "rectangle(3, 5)");
    assert(sq.area() == 16); 
    assert(sq.name() == "square(4, 4)");
    DynamicArray<int32_t> arr2;
    arr2.getCapacity();
    arr2.getSize();
    arr2.resize(3);
    arr2[1] = 5;
}