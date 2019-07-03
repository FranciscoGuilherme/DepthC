#include <stdio.h>
#include <stdlib.h>

#include "headers/div.h"

void call_div(void)
{
    div_t result;

    result = div(11, 2);

    fprintf(stdout, "call_div: quociente - %u\n", result.quot);
    fprintf(stdout, "call_div: resto - %u\n", result.rem);

    return;
}
