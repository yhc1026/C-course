#include <stdio.h>
int main()
{
    int a = 1;
    char *b = &a;
    if (*b == 1)
    {
        printf("小端");
    }
    else
    {
        printf("大端");
    }
    return 0;
}