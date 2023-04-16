#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string input = get_string("Input: ");
    int i, j, bit;
    for (i = 0; i < strlen(input); i++)
    {
        for (j = 7; j >= 0; j--)
        {
            bit = (input[i] >> j) & 1;// shows the last number in the binary 
            if (bit == 1)
            {
                printf("\U0001F7E1");
            }
            else
            {
                 printf("\U000026AB");
            }
        }
        printf("\n");
    }
    return 0;
}

