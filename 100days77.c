
//Q77: Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>
int main() 
{
    int n, m, i, j, flag = 1;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) 
    {
        for (j = 0; j < m; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }
    if (n != m) 
    {
        printf("The matrix is not square, so it does not have a main diagonal.");
        return 0;
    }
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (a[i][i] == a[j][j]) 
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0) 
        {
            break;
        }
    }
    if (flag == 1) 
    {
        printf("The elements on the main diagonal are distinct.");
    } 
    else 
    {
        printf("The elements on the main diagonal are not distinct.");
    }
    return 0;
}
