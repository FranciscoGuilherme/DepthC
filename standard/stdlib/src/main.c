#include <stdio.h>
#include <stdlib.h>

#include "headers/atof.h"
#include "headers/atoi.h"
#include "headers/atol.h"

int main(int argc, char *argv[])
{
    (void) argc;
    (void) argv;

    call_atof();
    call_atoi();
    call_atol();

    return 0;
}
