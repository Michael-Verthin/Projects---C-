#include <stdio.h>

// # define TAXES = 0.17
void main()
{
    printf("\aHello Werld!\n");
    int x;
    printf("Please Enter a number: ");
    scanf("%d", &x);
    printf("%d is a number\n", x);

    float price, totalPrice;
    const float TAXES = 0.17;
    printf("Please enter the product price: ");
    scanf("%f", &price);
    totalPrice = price + (price * TAXES);
    printf("Total price including %.2f%% taxes is %.2f\n", TAXES * 100, totalPrice);
    flushall();
}