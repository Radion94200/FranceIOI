#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
   int number = 0;
   int weight = 0;
   int age = 0;
   int horn = 0;
   int garrot = 0;
   int calc = 0;
   scanf("%d", &number);
   repeat(number)
   {
      scanf("%d%d%d%d", &weight, &age, &horn, &garrot);
      calc = horn * garrot + weight;
      printf("%d\n", calc);
   }
   return 0;
}
