#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int sum = 0;
   int val = 0;
   repeat(20)
   {
      scanf("%d", &val);
      sum += val;
   }
   printf("%d\n", sum);
   return 0;
}
