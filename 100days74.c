//Q74: Find the transpose of a matrix.
#include <stdio.h>
int main() 
{
    int a[10][10], b[10][10], r, c, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    printf("Enter matrix elements:");
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < r; i++) 
    {
        for(j = 0; j < c; j++) 
        {
            b[j][i] = a[i][j];
        }
    }
    printf("Transpose of the matrix:");
    for(i = 0; i < c; i++) 
    {
        for(j = 0; j < r; j++) 
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}