#include <stdio.h>
#include <cs50.h>

int get_size(void)
int main(void)
void print_grid(int size)

{
    // comment

    int n;
    do
    {
        n = get_int("Size: ");
    }

    while (n<1);
    return n;

    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}


int main(void)
{
  int n = get_size();
  print_grid(n);
}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n<1);
    return n;
}

void print_grid(int size)
{
    for (in ti = 0; i < size; i ++)
    {}
}

