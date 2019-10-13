#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int crapauds = 1337;
   repeat(12)
      crapauds *= 2;
   printf("%d\n", crapauds);
   return 0;
}
