#include <stdio.h>

int main()
{
  int c;
  int countSpaces, countTabs, countLines;
  countSpaces = countTabs = countLines = 0;
  
  while((c = getchar()) != EOF)
  {
    if(c == ' ')
      countSpaces++;
    if(c == '\t')
      countTabs++;
    if(c == '\n')
      countLines++;
  }
  
  printf("\nTotal Spaces:\t%d\nTotal Tabs:\t%d\nTotal Lines:\t%d\n",
    countSpaces, countTabs, countLines);
  
  return 0;
}
