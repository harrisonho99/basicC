#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    enum Company
    {
        GOOGLE,
        FACEBOOK,
        XEROX,
        YAHHO,
        EBAY,
        MICROSOFT
    };
    enum Company goo = GOOGLE;
    printf("%d\n", XEROX);
    printf("%d \n", goo);
    printf("%d\n", EBAY);
    return 0;
}
