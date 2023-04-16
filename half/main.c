#include <math.h>
#include <stdio.h>
#include <stdarg.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x > y )
    {
        printf("x is greater than y\n");
    }
    else if (x < y)
    {
        printf("y is greater than x\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}