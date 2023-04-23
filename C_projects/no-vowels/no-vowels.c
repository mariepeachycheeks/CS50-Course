#include "../cs50/cs50.h"
#include <stdio.h>
#include <string.h>

string replace(char a[]);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Error");
        return 1;
    }

    else if (argc == 2)
    {
        replace(argv[1]);
        printf("%s \n", argv[1]);
    }

}

string replace(char a[])
{

    for (int i = 0; i < strlen(a); i++)
        {
            if (a[i] == 'a')
            {
                a[i] = '6';
            }
            else if (a[i] == 'e')
            {
                a[i] = '3';
            }
            else if (a[i] == 'i')
            {
                a[i] = '1';
            }
            else if (a[i] == 'o')
            {
                a[i] = '0';
            }


        }
        return 0;
}


