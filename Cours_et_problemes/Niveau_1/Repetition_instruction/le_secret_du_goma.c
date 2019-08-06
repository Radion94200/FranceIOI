#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
    repeat(15)
    {
        droite();
        ramasser();
    }
    droite();
    deposer();
    return 0;
}
