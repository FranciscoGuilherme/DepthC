#include "headers/abs.h"
#include "headers/div.h"
#include "headers/atof.h"
#include "headers/atoi.h"
#include "headers/atol.h"
#include "headers/rand.h"
#include "headers/exit.h"
#include "headers/abort.h"
#include "headers/strtod.h"
#include "headers/system.h"

int main(int argc, char *argv[])
{
    (void) argc;
    (void) argv;

    call_abs();
    call_div();
    call_atof();
    call_atoi();
    call_atol();
    call_rand();
    call_strtod();
    call_system();

    return 0;
}
