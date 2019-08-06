#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main(void)
{
    haut();
    repeat(4)
    {
        repeat(8)
            haut();
        droite();
        repeat(8)
            bas();
        droite();
    }
    repeat(8)
        haut();
    droite();
    repeat(9)
        bas();
    repeat(9)
        gauche();
    return 0;
}
