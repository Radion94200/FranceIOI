#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
    repeat (135)
    {
        printf("Je dois respecter le Grand Sorcier.\n");
    }
    return 0;
}
