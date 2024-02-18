#include <stdio.h>

#define VAT 0.17
int main()
{
  int priceGet, priceFinal;
  
  printf("Please enter the product price: ");
  scanf("%d", &priceGet);
  
  priceFinal = priceGet + (priceGet * VAT);
  printf("The price of the product after VAT is: %d\n", priceFinal);

  return 0;
}
