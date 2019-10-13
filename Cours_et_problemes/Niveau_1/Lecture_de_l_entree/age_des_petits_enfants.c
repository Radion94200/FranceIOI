#include <stdio.h>

int main(void)
{
   int ageCadet;
   int ageAine;
   scanf("%d", &ageCadet);
   scanf("%d", &ageAine);
   int difference = ageAine - ageCadet;
   printf("%d\n", difference);
   return 0;
}
