#include <stdio.h>
int i = 5;
void foo(void);

char text[255][25];
char *myFunc(void)
{
    static char x[] = "apple";
    return x;
}
int main(int argc, char const *argv[])
{

    printf("before: %i\n", i);
    foo();
    printf("after: %i\n", i);
    return 0;
}

int func_name(void)
{
    auto int y;
    return y;
}