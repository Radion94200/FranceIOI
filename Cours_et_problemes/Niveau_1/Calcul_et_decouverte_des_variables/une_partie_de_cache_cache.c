#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int i = 1;
   repeat(100)
   {
      printf("%d\n", i);
      i++;
   }
   printf("J'arrive !\n");
   return 0; 
}
