#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int i = 100;
   repeat(101)
   {
      printf("%d\n", i);
      i--;
   }
   printf("Décollage !\n");
   return 0;
}
