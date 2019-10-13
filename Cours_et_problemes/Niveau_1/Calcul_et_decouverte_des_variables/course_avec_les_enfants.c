#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int i = 1;
   repeat(10)
   {
      repeat(i)
         droite();
      ramasser();
      repeat(i)
         gauche();
      deposer();
      i++;
   }
   return 0;
}
