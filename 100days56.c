//Q56: Read and print elements of a one- dimensional array.

#include <stdio.h>
int main() 
{
    int arr[100], n, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements in array: ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements in array are: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}