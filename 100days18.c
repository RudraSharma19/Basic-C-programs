/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.
*/

#include<stdio.h>
int main(){
    int a;
    printf("Enter your marks : ");
    scanf("%d",&a);
    if(a>=90){
        printf("Grade A");
    }
    else if(a>=80 && a<90){
    printf("Grade B");
}
else if(a>=70 && a<80){
    printf("Grade C");
}
else if(a>=60 && a<70){
    printf("Grade D");
}
else{
printf("Grade F");
}
return 0;
}
