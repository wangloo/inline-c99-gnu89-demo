#include "func.h"

static inline int add_inline(int a, int b)
{
    return a + b;
}

int extern_func(int a, int b)
{
    // if the above inline function is optimized failed,
    // it will be regared as normal static function(test in main.c)
    return add_inline(a,b);
}
