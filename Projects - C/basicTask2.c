#pragma warning(disable : 4996); // A warning message that we are allowing to pass...
#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("There are %d numbers between A-Z\n", 'z' - 'a' + 1);
    system("pause");
}