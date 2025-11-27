//Q62: Reverse an array without taking extra space.

#include <stdio.h>
int main() 
{
    int n, i, a[100];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("The original array is: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    for(i = 0; i < n / 2; i++) 
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }
    printf("The reversed array is: ");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    return 0;
}