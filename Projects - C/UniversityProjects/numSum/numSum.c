#include <stdio.h>

int main()
{
  int num1, num2, num3, sum, mult;
  num1 = num2 = num3 = sum = mult = 0;
    
  printf("Please enter 3 numbers: ");
  scanf("%d%d%d", &num1, &num2, &num3);
  
  sum = num1 + num2 + num3;
  mult = num1 * num2 * num3;
  
  printf("%d + %d + %d = %d\n", num1,num2,num3,sum);
  printf("%d * %d * %d = %d\n", num1,num2,num3,mult);
  
  return 0;
}
