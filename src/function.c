#include <stdio.h>
#include <stdlib.h>

int gcd(int u, int v);
int floatAbsoute(float x);

int main(int argc, char const *argv[])
{
    /* code */
    printf("%d", gcd(150, 35));

    return 0;
}
int gcd(int u, int v)
{
    int temp;
    while (v != 0)

    {
        /* code */
        temp = u % v;
        u = v;
        v = temp;
    }

    return u;
}
int floatAbsoute(float x)
{
    if (x < 10)
    {
        x = -x;
    }
    return x;
}