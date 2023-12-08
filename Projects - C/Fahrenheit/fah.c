#include <stdio.h>

/*Print Fahrenheit-Celsius table
  for fahr = 0 , 20 , ... , 300*/

int main() {
  int fahr, celsius;
  int lower, upper, step;
  
  lower = 0;    /*lower limit if temperature table */
  upper = 300;  /*upper limit*/
  step = 20;    /*step size*/
  
  fahr = lower;
  printf("Fahrenheit\tCelsius\n");
  
  while(fahr <=upper) {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
  return 0;
}
