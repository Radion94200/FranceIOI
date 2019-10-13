#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
int i = 1;
   int j = 1;
   repeat(20){

   repeat(20)
   {
      int calc = i * j;
      printf("%d ", calc);
      //i++;
      j++;
   }
   i++;
   j = 1;
   printf("\n");
   }
   return 0;
}
