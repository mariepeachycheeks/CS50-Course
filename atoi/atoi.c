#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);

int main(void)
{
    string input = get_string("Enter a positive integer: ");

    for (int i = 0, n = strlen(input); i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input));
}
int convert(string input)
{
    int len = strlen(input);
    int number = 0;
    if (len <= 0){
        return number;
    }
    else {
        if (input[len - 2] >= '0' && input[len - 2] <= '9') {
            int c = input[len-1] - '0';
            number = c * pow(10, len - 2);
        }
        if (len > 1){
            input[len-2] = '\0';
        }
        return convert(input) + number;
    }
}


