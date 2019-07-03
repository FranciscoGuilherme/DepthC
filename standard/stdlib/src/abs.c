#include <stdio.h>
#include <stdlib.h>

#include "headers/abs.h"

void call_abs(void)
{
    fprintf(stdout, "call_abs: %hu, %hu\n", abs(-10), abs(-5));

    return;
}
