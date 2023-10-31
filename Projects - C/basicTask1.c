#pragma warning(disable : 4996); // A warning message that we are allowing to pass...
#include <stdio.h>
#include <stdlib.h>
// Convert a number that the user is entering with .XXX
// Print only the numbers before the '.'
void main()
{
    float n;
    printf("Please enter a number, we will round it for you: ");
    scanf("%f", &n);
    printf("%.0f", n);
    system("pause");
}