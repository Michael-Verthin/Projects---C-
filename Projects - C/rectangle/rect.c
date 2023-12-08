#include <stdio.h>

int main()
{
  int width, height, area, around;
  width = height = area = around = 0;
  
  printf("Please enter the values of the width and the height: ");
  scanf("%d%d", &width, &height);
  
  area = width * height;
  around = (width * 2) + (height *2);
  
  printf("The area is:\t%d\nThe around is:\t%d\n", area, around);
  
  return 0;
}
