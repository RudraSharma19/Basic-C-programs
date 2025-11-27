//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() 
{
    int a[10][10], m, n, i, j, k;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("The diagonal traversal of the matrix is:\n");
    for (k = 0; k < m + n - 1; k++) 
    {
        if (k % 2 == 0) 
        {
            for (i = (k < m) ? k : m - 1, j = k - i; i >= 0 && j < n; i--, j++) 
            {
                printf("%d ", a[i][j]);
            }
        } 
        else 
        {
            for (j = (k < n) ? k : n - 1, i = k - j; j >= 0 && i < m; j--, i++) 
            {
                printf("%d ", a[i][j]);
            }
        }
    }
    return 0;
}