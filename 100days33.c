//Q33: Write a program to check if a number is an Armstrong number.

#include<stdio.h>

int main()
{
    int n,count=0;int i;
    printf("Enter number\n");
    scanf("%d",&n);
    
    if(n==1)
    {
        printf("Neither prime nor composite");
        return 0;
    }
    
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("Prime");
        
    }
    else
    {
        printf("composite");
    }
    return 0;
    
}
