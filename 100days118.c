// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int missing = n; // Initialize missing with n
    for(i = 0; i < n; i++) {
        missing ^= i ^ arr[i]; // XOR all indices and array elements
    }

    printf("Missing number: %d\n", missing);
    return 0;
}
