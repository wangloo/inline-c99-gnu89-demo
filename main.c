#include <stdio.h>
#include "func.h"

int add_inline(int a, int b) {
    return a + b;
}

int main() 
{
    int x = 10, y = 20;
    int res;

    res = extern_func(x, y);
    printf("add x and y equals %d\n", res);

    // test if static
    /* extern int add_inline(int a, int b); */
    /* printf("addr 9 and 10 equals %d\n", add_inline(9, 10)); */

    return 0;
}
