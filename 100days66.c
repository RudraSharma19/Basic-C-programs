//Q66: Insert an element in a sorted array at the appropriate position.

#include <stdio.h>
int main() 
{
    int arr[100], n, i, j, num;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements in sorted order:");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be inserted: ");
    scanf("%d", &num);
    for(i = 0; i < n; i++) 
    {
        if(arr[i] > num) 
        {
            break;
        }
    }
    for(j = n; j > i; j--) 
    {
        arr[j] = arr[j - 1];
    }
    arr[i] = num;
    n++;
    printf("Array after insertion:");
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}