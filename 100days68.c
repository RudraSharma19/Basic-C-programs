//Q68: Delete an element from an array.

#include <stdio.h>
int main() 
{
    int arr[100], pos, i, n;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of element to delete: ");
    scanf("%d", &pos);
    if(pos < 0 || pos >= n) 
    {
        printf("Invalid position!");
    } 
    else 
    {
        for(i = pos; i < n - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }
        n--;
        printf("Array after deletion: ");
        for(i = 0; i < n; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}