// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch
// If your program is executed without any command-line arguments or with more than one command-line argument, your program should print an error message of your choice (with printf) and return from main a value of 1 (which tends to signify an error) immediately.
//Your program must contain a function called replace which takes a string input and returns a string output.
//This function will change the following vowels to numbers: a becomes 6, e becomes 3, i becomes 1, o becomes 0 and u does not change.
//The input parameter for the replace function will be argv[1] and the return value is the converted word.
//The main function will then print the converted word, followed by \n.
//You may want to try using the switch statement in your replace function.

#include <cs50.h>
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


