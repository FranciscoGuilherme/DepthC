#include <stdio.h>
#include <stdlib.h>

#include "headers/rand.h"

void call_rand(void)
{
    fprintf(stdout, "call_rand: %d\n", rand() % RANGE);

    return;
}
