#include <cs50.h>
#include <stdio.h>
#include <stdlib>

int main(int argc, string argv[])
{
    int x = atoi(argv[1]);
    if (argc[] != 2)
    {
        printf("Error\n");
        return 1;
    }

    else if (ar%1 != 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else if (argc[] != 2 && ar%1 != 0)
    {
         string k = get_string("Text: \n");
        for (int i =0; i<strlen(k); i++)
        {
            if (k[i]>= 65 && k[i]<= 90 ou k[i]>= 97 && k[i]<= 122)
            {
                char x = k[i] - argv[1];
                
            }
            else
            {
                printf("s%", k[i]);
            }

        }
    }




    // Make sure program was run with just one command-line argument

    // Make sure every character in argv[1] is a digit

    // Convert argv[1] from a `string` to an `int`

    // Prompt user for plaintext


    // For each character in the plaintext:

        // Rotate the character if it's a letter
}

}