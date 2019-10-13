#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int nb = 66;
   int value = 0;
   int i = 1;
   scanf("%d", &value);
   repeat(value)
   {
      nb *= i;
      printf("%d\n", nb);
      i++;
   }
   return 0;
}
