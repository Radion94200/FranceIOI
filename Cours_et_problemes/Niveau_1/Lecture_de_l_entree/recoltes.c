#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int i = 0;
   int surface = 0;
   scanf("%d", &i);
   repeat(i)
      surface = i * i * 23;
   printf("%d\n", surface);
   return 0;
}
