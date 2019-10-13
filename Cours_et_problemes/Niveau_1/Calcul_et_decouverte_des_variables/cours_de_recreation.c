#include <stdio.h>

int main(void)
{
   int cote = 0;
   int perimetre = 0;
   int surface = 0;
   cote = ((5*17)+(2*7)+(1*5)+(2*2));
   perimetre = 4 * cote;
   surface = cote * cote;
   printf("%d\n%d\n", surface, perimetre);
   return 0;
}
