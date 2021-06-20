#include <time.h>
#include <stdio.h>
#include <stdbool.h>
void brk();
int main(int argc, char const *argv[])
{

    /* code */
    enum Month
    {
        Jan,
        Feb,

    };
    printf("%d", Jan);
    brk();

    enum gender
    {
        male,
        female
    };
    enum gender Mygender;
    Mygender = male;
    enum gender anotherGen = female;
    bool isMale = (anotherGen == male);
    printf("anotherGen: %s" + isMale ? "true" : "false");
    brk();
    printf("anotherGen: %d" + isMale);
    brk();

    printf("male : %d", Mygender);
    brk();
    float num = 23.2424;
    bool a = true;
    printf("%d", a);
    brk();
    char myChar = 87;

    printf("%c", myChar);
    brk();

    char newLine = "\n";
    printf("%c", newLine);
    brk();
    float once = 0.98323232312332;
    printf("float : %.100f", once);

    return 0;
}

void brk()
{
    printf("\n");
}