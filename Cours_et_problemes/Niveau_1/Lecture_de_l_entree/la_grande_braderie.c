#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int posdep = 0;
   int largemp = 0;
   int nbvend = 0;
   scanf("%d", &posdep);
   scanf("%d", &largemp);
   scanf("%d", &nbvend);
   printf("%d\n", posdep);
   repeat(nbvend)
   {
      int calc = posdep + largemp;
      printf("%d\n", calc);
      posdep += largemp;
   }
   return 0;
}
