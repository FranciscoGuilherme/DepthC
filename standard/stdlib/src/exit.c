#include <stdio.h>
#include <stdlib.h>

#include "headers/exit.h"

void call_exit(void)
{
    short int count = 1;

    for (; count < 5; count++)
    {
        if (count == 2)
        {
            exit(0);
        }

        fprintf(stdout, "call_exit: %hd\n", count);
    }

    return;
}
