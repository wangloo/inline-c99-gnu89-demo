#include <stdio.h>
#include "func.h"

/* inline int func_in(void) { */
    /* printf("This is a inline-only function\n"); */
/* } */

/* int add_inline(int a, int b) */
/* { */
    /* return a + b; */
/* } */

/* extern int add_inline(int, int); */

int add_inline(int a, int b)
{
    return a + b;
}

int main() 
{
    int x = 10, y = 20;
    int res;

    res = extern_func(x, y);
    printf("add x and y equals %d\n", res);
    return 0;
}
