#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int i = 1;
   int numb = 0;
   repeat(9)
   {
      numb += i * i * i;
      i += 2;
      //printf("%d\n", numb);
   }
   printf("%d\n", numb);
   return 0;
}
