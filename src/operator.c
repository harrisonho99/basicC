#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 60; //0011 1100;
    int b = 12; //0000 1100;
    int res = 0;
    int c = a & b;         //00001100
    int d = a | b;         //00111100
    int f = a ^ b;         //00110000
    int e = a << b;        //11000011
    int g = ~a;            //11000011
    printf("c : %i\n", c); //12
    printf("d : %i\n", d); //60
    printf("f : %i\n", f); //48
    printf("e: %d\n ", e); //201
    printf("g: %d\n ", g); //201

    return 0;
}
