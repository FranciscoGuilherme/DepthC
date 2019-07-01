#include <stdio.h>
#include <stdlib.h>

#include "headers/atol.h"

void call_atol(void)
{
    char *number = "100000";
    long sequence[2] = {0, 20000};

    sequence[0] = atol(number);

    fprintf(stdout, "call_atol: %ld\n", sequence[0] + sequence[1]);

    return;
}
