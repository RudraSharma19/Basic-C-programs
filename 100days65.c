//Q65: Search in a sorted array using binary search.

#include <stdio.h>
int main() 
{
    int n, i, key, first, last, middle;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers (sorted in ascending order):", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter value to find: ");
    scanf("%d", &key);
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
    while (first <= last) 
    {
        if (arr[middle] < key)
            first = middle + 1;    
        else if (arr[middle] == key) 
        {
            printf("%d found at location %d.", key, middle + 1);
            break;
        }
        else
            last = middle - 1;
        middle = (first + last) / 2;
    }
    if (first > last)
        printf("Not found! %d isn't present in the list.", key);
    return 0;
}