#include <stdio.h>
int init()
{
    return 50;
}

long foo()
{
    static long count = 0;
    return ++count;
}
int main(int argc, char const *argv[])
{
    // for (int i = foo(); i < 10; foo())
    // {
    //     printf("%d\n", i);
    // }

    printf("%d", sizeof(foo()));
    printf("%d", foo());
    printf("%d", foo());
    printf("%d", foo());
    return 0;
}
