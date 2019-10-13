#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int i = 0;
   int j = 0;
   repeat(50)
   {
      j += 1;
      i += j;
      printf("%d\n", i);
   }
   return 0;
}
