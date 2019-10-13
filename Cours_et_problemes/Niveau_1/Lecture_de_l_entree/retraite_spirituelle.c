#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int day = 0;
   int value = 0;
   scanf("%d", &day);
   repeat(day)
      value += 60 * 60 * 16;
   printf("%d\n", value);
   return 0;
}
