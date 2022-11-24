#include "func.h"

extern inline int add_inline(int a, int b)
{
    return a + b;
}

int extern_func(int a, int b)
{
    // if the above inline function is optimized failed,
    // looking for an externel implemented function(in main.c)
    return add_inline(a,b);
}
