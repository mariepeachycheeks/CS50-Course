#include "../cs50/cs50.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        int x = atoi(argv[1]);
        if (x == 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        else
        {
            string k = get_string("Text: \n");
            for (int i = 0; i < strlen(k); i++)
            {
                if ((k[i] >= 65 && k[i] <= 90) || (k[i] >= 97 && k[i] <= 122))
                {
                    char x = k[i] - (int)argv[1];
                    printf("%c", x);
                }
                else
                {
                    printf("%c", k[i]);
                }
            }
            printf("\n");
        }
    }

    return 0;
}
