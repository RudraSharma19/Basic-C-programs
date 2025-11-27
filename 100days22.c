//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main()
{
  float costprice, sellingprice, profitloss, percentage;
  printf("Enter Cost Price: ");
  scanf("%f",&costprice);
  printf("Enter Selling Price: ");
  scanf("%f",&sellingprice);
  if (sellingprice > costprice) {
  	profitloss = sellingprice - costprice;
  	percentage = (profitloss / costprice) * 100;
  	printf("Profit = %.2f\n", profitloss);
  	printf("Profit Percentage = %.2f%%\n", percentage);
  }
  else if (costprice > sellingprice)
  {
  	profitloss = costprice - sellingprice;
  	percentage = (profitloss / costprice) * 100;
  	printf("Loss = %.2f\n", profitloss);
  	printf("Loss Percentage = %.2f%%\n", percentage);
  }
  else 
  {
  	printf("No Profit, No Loss. \n");
  }
}
