#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int min = 0;
   int max = 0;
   scanf("%d", &min);
   scanf("%d", &max);
   repeat(max - min + 1)
   {
      printf("%d\n", min);
      min++;
   }
   return 0;
}
