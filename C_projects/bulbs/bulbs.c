#include "../cs50/cs50.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void)
{

    string input = get_string("Input: ");
    int i, j, bit;
    for (i = 0; i < strlen(input); i++)
    {
        for (j = 7; j >= 0; j--)
        {
            bit = (input[i] >> j) & 1;
            if(bit == 1)
            {
                printf("\U0001F7E1"); // yellow emoji
            }
            else
            {
                printf("\U000026AB"); // black emoji
            }
        }

    printf("\n");
    }
    return 0;

}



