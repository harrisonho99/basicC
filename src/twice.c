#include <stdio.h>
double multi();

int main(int argc, char const *argv[])
{
    int age = 30;
    double salary = 12312.44244;
    double myList[3] = {1.3, 31.4, 42.4};
    double res = multi(salary);
    printf("double your salary is %f \n", res);
    return 0;
}
double multi(double num)
{
    double twice = num * 2.0;
    return twice;
}