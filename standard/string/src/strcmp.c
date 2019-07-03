#include <stdio.h>
#include <string.h>

#include "headers/strcmp.h"

void call_strcmp(void)
{
    char *names[] = {"Francisco", "Francisco"};

    fprintf(stdout, "call_strcmp: %d\n", strcmp(names[0], names[1]));

    return;
}
