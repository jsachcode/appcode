#include <iostream>
#include "fibonacci_series.h"

// Function to print Fibonacci series up to nth term
void fibonacciSeries(int n) {
    int a = 0, b = 1;
    
    std::cout << "Fibonacci Series: ";
    
    for (int i = 0; i < n; i++) {
        std::cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    
    std::cout << std::endl;
}
