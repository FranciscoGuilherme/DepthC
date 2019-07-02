#include <stdio.h>
#include <stdlib.h>

#include "headers/abort.h"

void call_abort(void)
{
    short int count = 1;

    for (; count < 5; count++)
    {
        if (count == 2)
        {
            abort();
        }

        fprintf(stdout, "call_abort: %hd\n", count);
    }

    return;
}
