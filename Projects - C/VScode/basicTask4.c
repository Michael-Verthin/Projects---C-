#pragma warning(disable : 4996); // A warning message that we are allowing to pass...

#include <stdio.h>
#include <stdlib.h>

// Calculate the cost of driving in a cab

#define STARTING_PRICE 10.20
#define PRICE_FOR_EACH_KM 1.30
#define PRICE_FOR_EACH_LUGGAGE 2.00

void main()
{
    int distanceTraveled, luggageNum;
    double totalPrice;
    printf("Insert the number of km traveled: ");
    scanf("%d", &distanceTraveled);
    printf("Insert the number of luggage used: ");
    scanf("%d", &luggageNum);

    totalPrice = STARTING_PRICE + distanceTraveled * PRICE_FOR_EACH_KM + luggageNum * PRICE_FOR_EACH_LUGGAGE;

    printf("\nThe user need to pay %.2f NIS\n", totalPrice);

    system("pause");
}