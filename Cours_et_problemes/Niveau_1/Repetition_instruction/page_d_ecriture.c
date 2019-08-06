#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
    repeat(30)
        printf("a_");
    printf("\n");
    repeat(30)
        printf("b_");
    printf("\n");
    repeat(30)
        printf("c_");
    printf("\n");
    return 0;
}
