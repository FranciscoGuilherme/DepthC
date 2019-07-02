#include <stdio.h>
#include <stdlib.h>

#include "headers/strtod.h"

void call_strtod(void)
{
    char *number = "20.30300";
    char *aux = NULL;

    fprintf(stdout, "call_strtod: %lf\n", strtod(number, &aux));

    return;
}
