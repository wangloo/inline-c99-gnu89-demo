#include "func.h"
#include <stdio.h>

extern inline int add_inline(int a, int b)
{
    return a + b;
}

int extern_func(int a, int b)
{
    // if the above inline function is optimized failed,
    // it will be regared as normal function(cause multiple definition)
    return add_inline(a,b);
}
