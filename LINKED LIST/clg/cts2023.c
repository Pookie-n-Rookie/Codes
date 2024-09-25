#include <stdio.h>

void maxelwindow(int arr[], int k, int n) {
    int s = 0;  // Starting index of the window
    
    while (s + k <= n) {  // Ensure window does not exceed array length
        int max = arr[s]; // Initialize max with the first element of the window
        
        // Iterate through the window of size 'k' to find the maximum
        for (int i = s; i < s + k; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        
        printf("Maximum element in window [%d, %d] is: %d\n", s + 1, s + k, max);
        
        // Slide the window by one element
        s++;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Example array
    int n = sizeof(arr)/sizeof(arr[0]);           // Size of the array
    int k = 4;                                    // Size of the window
    
    maxelwindow(arr, k, n);
    
    return 0;
}
