#include <iostream>
#include "prime_numbers.h"

// Function to find and print prime numbers from 1 to n
void findPrimeNumbers(int n) {
    std::cout << "Prime Numbers from 1 to " << n << ": ";
    
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        
        if (isPrime) {
            std::cout << num << " ";
        }
    }
    
    std::cout << std::endl;
}
