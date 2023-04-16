// Practice writing a function to find a max value

#include <cs50.h>
#include <stdio.h>

int max(int array[], int n);

int main(void)
{
    int n;
    do
    {
        n = get_int("Number of elements: ");
    }
    while (n < 1);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = get_int("Element %i: ", i);
    }

    printf("The max value is %i.\n", max(arr, n));
}

// TODO: return the max value
int max(int array[], int n)
{
    int swap = 1;
    while (swap != 0){
        for (int j = 0; j < n; j++){
            if (array[j] < array[j+1]){
                int change = array[j];
                array[j] = array[j+1];
                array[j+1] = change;
                swap ++;
                j++;
            }
        }
    }

    return array[0];
}
