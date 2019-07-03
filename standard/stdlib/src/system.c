#include <stdio.h>
#include <stdlib.h>

#include "headers/system.h"

void call_system(void)
{
    fprintf(stdout, "call_system: %hu", system("ls"));

    return;
}
