#include <stdio.h>
#include <stdlib.h>

#include "headers/atof.h"

void call_atof(void)
{
    char *number = "10.5";
    float sequence[2] = {0, 2.5};

    sequence[0] = atof(number);

    fprintf(stdout, "call_atof: %.1f\n", sequence[0] + sequence[1]);

    return;
}
