//Q76: Check if a matrix is symmetric.
#include <stdio.h>
int main() 
{
    int matrix[10][10], r, c, i, j, flag = 1;
    printf("Enter rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    if (r != c) 
    {
        printf("Matrix should be square matrix.");
        return 0;
    }
    printf("Enter elements of matrix:");
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < r; i++) 
    {
        for (j = 0; j < c; j++) 
        {
            if (matrix[i][j] != matrix[j][i]) 
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag)
        printf("Matrix is symmetric.");
    else
        printf("Matrix is not symmetric.");
    return 0;
}