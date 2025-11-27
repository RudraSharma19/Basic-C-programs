// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n, i, repeated;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    repeated = 0;
    for(i = 0; i < n; i++) {
        repeated ^= arr[i]; // XOR all elements
    }

    // XOR with 0 to n-2 (since one element is repeated)
    for(i = 0; i < n-1; i++) {
        repeated ^= i;
    }

    printf("Repeated element: %d\n", repeated);
    return 0;
}
