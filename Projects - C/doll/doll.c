/*
  Made by Michael Verthin, 209506260, for mm"n 11

  The user is entering a continuous input of numbers,
  the first one is the USD exchange rate for the given day,
  Then the program will return each USD to its converten Shekel amount.

  Two things that should only be make once during this code is the "Title" ($ IS)
  and saving the dollar exchange rate, for that, the if-else check for the first
  index only and the rest is the calculation for the convert
*/
#include <stdio.h>

int main()
{
  float dollar_exchange_rate = 0, total_dollar = 0, total_shekel = 0, dollar_amount = 0;
  int i = 0;

  while (scanf("%f", &dollar_amount) != EOF)
  {
    if (i == 0)
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
