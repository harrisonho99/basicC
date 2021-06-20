#include <stdio.h>

int main(int argc, char *argv[])
{
    int numberOfArgs = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];
    char *arg3 = argv[2];

    // printf("number of argurments : %i\n", numberOfArgs);
    // printf("arg line 1: %s\n", arg1);
    // printf("arg line 2: %s\n", arg2);
    // int a = (int)&arg2 * (int)&arg3;
    printf("%d, %s\n", &arg2);
    // printf("Area is : %d", (int)&arg2 * (int)&arg3);
    return 0;
}