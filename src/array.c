#include <stdio.h>
#include <stdbool.h>
#include <array.h>
int sizeOfArray(int list[])
{
    return sizeof(&list) / sizeof(*list);
}

void printFormatArray(int listPrime[])
{
    int size = sizeOfArray(listPrime);
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        switch (i == 0)
        {
        case true:
            printf("%d", listPrime[i]);
            break;
        default:
            printf(", %d", listPrime[i]);
            break;
        }
    }
    printf(" ]\n");
}

void push(int arr[], int element)
{
    int size = sizeOfArray(arr);
    arr[size] = element;
}