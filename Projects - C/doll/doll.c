#include <stdio.h>

int main()
{
  /*
  float floatArr[10];
  int i = 0;
  while(scanf("%f", &floatArr[i])==1)
  {
    printf("The first number is: %.2f", floatArr[0]);
    i++;
  }
  */
  
  float dollar_exchange_rate = 0, total_dollar = 0, total_shekel = 0, dollar_amount = 0;
  int i = 0;
  
  while(scanf("%f", &dollar_amount)==1)
  {
    if(i==0)
    {
      printf("$\t\tIS\n");
      dollar_exchange_rate = dollar_amount;
    }
    else
    {
      printf("%.2f\t\t%.2f\n", dollar_amount, dollar_amount * dollar_exchange_rate);
      total_dollar += dollar_amount;
      total_shekel += dollar_amount * dollar_exchange_rate;
    }
    i++;
  }
  
  printf("%.2f\t\t%.2f\n", total_dollar, total_shekel);
  return 0;
}
