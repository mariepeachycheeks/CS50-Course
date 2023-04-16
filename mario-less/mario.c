#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("height between 1 and 8 inluded\n");
    int h = 0;

    do
    {
        h = get_int("height: \n");
    }
    while (h > 0 || h <9);


    int dash = 0;
    for (int i=0; i < h; i++)
    {
        dash++;
        for(int j = 0; j < (h - dash); j++)
        {
            printf (" ");
        }
        for (int s = 0; s < dash; s++)
        {
            printf ("#");
        }

        printf("\n");
    }
}wget https://cdn.cs50.net/2022/fall/psets/1/cash.zip
