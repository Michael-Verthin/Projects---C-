#include <stdio.h>

int main()
{
  int age, year, month;
  float salary;
  age = year = 0;
  
  printf("How old are you: ");
  scanf("%d", &age);
  
  printf("When you were born: ");
  scanf("%d", &year);
  
  printf("how much money you make: ");
  scanf("%f", &salary);
  
  printf("Hello world!\n");
  printf("You are %d years old\nAnd you were born in %d\n", age, year);
  printf("You make %.2f after taxes...\n", salary);
  printf("%d", month);
  
  return 1;
}
