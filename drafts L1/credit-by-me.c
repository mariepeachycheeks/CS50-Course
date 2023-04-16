#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number, size;
    number  = get_long("Credit card number: ");
    int c1 = 0;
    int c2 = 0;
    int cc = number;
    int i = 0;
    while (cc > 0)
    {
        cc = cc / 10;
        i++;
    }
    return 0;

    while (number > 0)
    {
        if (i == 16) // here is 16 digits
        {
            while (number > 0)
            {
                int mod = number % 10;
                number = number/10;
                int mod2 = number %10;
                number = number/10;
                c1 = c1+(mod*2);
                c2 = c2 + mod2;
            }

        }
        else if (i == 13 || i == 15)
        {
             while (number > 0)
             {
                int mod = number % 10;
                number = number/10;
                int mod2 = number %10;
                number = number/10;
                c1 = c1+(mod);
                c2 = c2 + (mod2*2);
             }
        }

        int c = c1+c2;

    int start;
    while(start>100)
    {
        start = number = number/10;
    }
    return 0;

    if (i!= 13 && i!= 15 && i!= 16)
    {
        printf("INVALID\n");
    }
    if ((start / 10 == 5) && (0 < start % 10 && start % 10 < 6))
    {
        printf("MASTERCARD\n");
    }

    else if ((start / 10 == 3) && (start % 10 == 4 || start % 10 == 7))
    {
        printf("AMEX\n");
    }

    else if (start / 10 == 4)
    {
        printf("VISA\n");
    }

     else
    {
        printf("INVALID\n");
    }

}

}
