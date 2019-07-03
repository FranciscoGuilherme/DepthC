#include <stdio.h>
#include <string.h>

#include "headers/strchr.h"

void call_strchr(void)
{
    const char *name = "Testando a funcao";

    fprintf(stdout, "call_strchr: %s\n", strchr(name, 'f'));

    return;
}
