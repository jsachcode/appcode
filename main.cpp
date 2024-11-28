#include <iostream>
#include "binary_search.h"
#include "fibonacci_series.h"
#include "prime_numbers.h"

int main() {
    int choice;
    
    std::cout << "Select an option:" << std::endl;
    std::cout << "1. Binary Search" << std::endl;
    std::cout << "2. Fibonacci Series" << std::endl;
    std::cout << "3. Prime Numbers" << std::endl;
    std::cout << "Enter your choice (1/2/3): ";
    std::cin >> choice;

    switch (choice) {
        case 1: {
            // Binary Search
            int size, target;
            std::cout << "Enter the size of the array: ";
            std::cin >> size;
            int arr[size];
            
            std::cout << "Enter the elements of the array (sorted): ";
            for (int i = 0; i < size; i++) {
                std::cin >> arr[i];
            }
            
            std::cout << "Enter the target number to search for: ";
            std::cin >> target;
            
            int result = binarySearch(arr, size, target);
            if (result != -1) {
                std::cout << "Element found at index " << result << std::endl;
            } else {
                std::cout << "Element not found in the array." << std::endl;
            }
            break;
        }
        
        case 2: {
            // Fibonacci Series
            int n;
            std::cout << "Enter the number of terms for Fibonacci series: ";
            std::cin >> n;
            fibonacciSeries(n);
            break;
        }
        
        case 3: {
            // Prime Numbers
            int n;
            std::cout << "Enter the number up to which you want to find prime numbers: ";
            std::cin >> n;
            findPrimeNumbers(n);
            break;
        }
        
        default:
            std::cout << "Invalid choice!" << std::endl;
            break;
    }

    return 0;
}
