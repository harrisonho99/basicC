#include <stdio.h>
#include <stdbool.h>
// #include "../header/array.h"
#include "../header/findPrimeNumber.h"
#define MAX_SIZE 1000

int main(int argc, char const *argv[])
{
    int list[MAX_SIZE];

    findPrimeNumber(3, 100);
    printFormatArray(list);
    int start = 3;
    int end = 100;

    return 0;
}
