
//Q71: Read and print a matrix.

#include <stdio.h>
int main() 
{
    int m, n, i, j;
    int a[10][10];
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix is:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
