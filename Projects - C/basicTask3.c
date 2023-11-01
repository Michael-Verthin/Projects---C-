#pragma warning(disable : 4996); // A warning message that we are allowing to pass...

#include <stdio.h>
#include <stdlib.h>

#define PRICE_PER_TICKET 35
void main()
{
    int numOfTickets, pay;

    printf("Please enter the amount you would like to buy: ");
    scanf("%d", &numOfTickets);

    pay = numOfTickets * PRICE_PER_TICKET;
    printf("Please pay %d NIS\n", pay);

    system("pause");
}