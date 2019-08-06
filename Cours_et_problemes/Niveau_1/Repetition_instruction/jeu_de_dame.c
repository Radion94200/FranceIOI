#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
    repeat(20)
    {
        repeat(20)
            printf("OX");
        printf("\n");
        repeat(20)
            printf("XO");
        printf("\n");
    }
    return 0;
}
