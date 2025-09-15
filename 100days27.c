#include<stdio.h>
int main(){
    int sum=0;
    int i=1;
    int n;
    printf("Enter the valuer of n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        
        sum+=(2*i-1);

       
    }
    printf("The sum of first  odd natural number is=%d\n",sum);
    return 0;}

