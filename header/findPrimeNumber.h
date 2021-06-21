#include "./array.h"
#include <stdio.h>
void findPrimeNumber(int start, int end)
{
    for (int i = start; i < end; i++)
    {
        switch (i)
        {
        case 1:
            printf("%d \n", i);
            break;
        case 2:
            printf("%d \n", i);
            break;
        case 3:
            printf("%d \n", i);
            break;
        default:;
            int count = 0;
            for (int y = 4; y < i; y++)
            {
                if (i % y == 0)
                {
                    ++count;
                }
            }
            if (count == 0)
            {
                printf("%d \n", i);
            }
            break;
        }
    }
}