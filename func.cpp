#include "func.h"

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