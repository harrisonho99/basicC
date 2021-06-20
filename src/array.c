#include <stdio.h>
#include <fileapi.h>
int main(int argc, char const *argv[])
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float avg = 0.0f;
    printf("\n Enter the 10 grades: \n");

    for (int i = 0; i < count; i++)
    {
        printf("%2u>", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    /* code */
    avg = (float)sum / count;
    printf("\navg is : %f", avg);
    return 0;
}
