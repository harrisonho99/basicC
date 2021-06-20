extern char text[][50];
#include <countnum.h>
#include <stdio.h>
void foo(void)
{
    extern int i;
    printf("%d ", i);
    i = 100;
}