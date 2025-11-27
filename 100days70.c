//Q70: Rotate an array to the right by k positions.

#include <stdio.h>
int main() 
{
    int n, k, i, j, temp;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    k = k % n; // In case k is greater than n
    for(i = 0; i < k; i++) 
    {
        temp = arr[n - 1];
        for(j = n - 1; j > 0; j--) 
        {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
    printf("Array after rotation: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}