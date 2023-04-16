#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int start;
    do
    {
        start = get_int("Start size: \n");
    }
    while (start < 9);

    int end;
    do
    {
        end = get_int("End size: \n" );
    }
    while (end < start
    );


    int calculation;
    int counter = 0;
    while (start < end)
    {
        start = start + start/3 - start/4;
        counter++;
    }
    printf("Years: %i\n", counter);

}


    // TODO: Prompt for start size

    // TODO: Prompt for end size

    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years

