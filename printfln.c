// why are you looking at this


// cool libraries
#include <stdio.h>
#include <stdarg.h>
#include <libgen.h>

// this is the most useless function ever
// it just appends "\n" to printf
void function_printfln(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    // print the content
    vprintf(format, args);

    // appends "\n" to content
    printf("\n");
}
