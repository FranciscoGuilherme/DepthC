#include <stdio.h>
#include <stdlib.h>

#include "headers/atoi.h"

void call_atoi(void)
{
    char *number = "10";
    int sequence[2] = {0, 2};

    sequence[0] = atoi(number);

    fprintf(stdout, "call_atoi: %d\n", sequence[0] + sequence[1]);

    return;
}
