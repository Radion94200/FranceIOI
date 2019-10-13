#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int max = 0;
   int min = 0;
   scanf("%d", &max);
   scanf("%d", &min);
   int i = max;
   int value = 0;
   repeat(max - min + 1)
   {
      value += i * i;
      i--;
   }
   printf("%d\n", value);
   return 0;
}
