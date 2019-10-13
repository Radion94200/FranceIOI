#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int repete = 0;
   scanf("%d", &repete);
   repeat(repete)
      printf("Je dois suivre en cours\n");
   return 0;
}
