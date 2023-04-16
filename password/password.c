// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// TODO: Complete the Boolean function below
bool valid(string password)
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    for (int i =0; i <strlen(password); i++)
    {

        if (password[i] >= 'a' && password[i]<= 'z')
        {
            a++;
        }
        else if (password[i] >= 'A' && password[i]<= 'Z')
        {
            b++;
        }
        else if (password[i] >= '!' && password[i]<= '/')
        {
            c++;
        }
        else if (password[i] >= '0' && password[i]<= '9')
        {
            d++;
        }

    }

    if (a > 0 && b>0 && c>0 && d>0)
    {
        return true;
    }
    else
    {
        return false;
    }


}
