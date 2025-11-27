//Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>
int main() 
{
    int matrix[3][3], rowSum[3] = {0}, i, j;
    printf("Enter elements of the 3x3 matrix:\n");
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i = 0; i < 3; i++) 
    {
        for(j = 0; j < 3; j++) 
        {
            rowSum[i] += matrix[i][j];
        }
    }
    printf("Sum of each row:\n");
    for(i = 0; i < 3; i++) 
    {
        printf("Row %d sum: %d\n", i, rowSum[i]);
    }
    return 0;
}