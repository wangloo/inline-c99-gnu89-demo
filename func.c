#include "func.h"
#include <stdio.h>

inline int add_inline(int a, int b)
{
    return a + b;
}

int extern_func(int a, int b)
{
    // if the above inline function is optimized failed,
    // it will be regared as externel declaration(definition in main.c)
    return add_inline(a,b);
    /* return 0; */
}
