#include <stdio.h>
float toYear(int min);
float toDay(int min);
int main(int argc, char const *argv[])
{
    /* code */
    int min = 30;
    printf("enter the minus: \n");
    scanf("%d", &min);
    printf("to Day : %.2f\n", toDay(min));
    printf("to Year : %.10f\n", toYear(min));
    return 0;
}
float toYear(int min)
{
    return (float)min / (60 * 24 * 365);
}
float toDay(int min)
{
    return (float)min / (60);
}
