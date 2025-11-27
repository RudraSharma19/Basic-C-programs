//Q72: Find the sum of all elements in a matrix.

#include <stdio.h>
int main() 
{
    int matrix[3][3], sum = 0;
    printf("Enter elements of 3x3 matrix:");
    for(int i = 0; i < 3; i++) 
    {
        for(int j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }
    printf("Sum of all elements in the matrix: %d", sum);
    return 0;
}