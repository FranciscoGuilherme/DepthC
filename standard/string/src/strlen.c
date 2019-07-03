#include <stdio.h>
#include <string.h>

#include "headers/strlen.h"

void call_strlen(void)
{
    char *name = "Francisco";

    fprintf(stdout, "call_strlen: %lu\n", strlen(name));

    return;
}
