#include "binary_search.h"

// Function to perform binary search
int binarySearch(int arr[], int size, int target) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target) {
            return mid;  // Found the element
        }
        
        if (arr[mid] < target) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1; // Search in the left half
        }
    }
    
    return -1;  // Element not found
}
