#include <stdio.h>
#include <cs50.h>

candidate get_president (string promt);
typedef struct
{
    string name;
    float votes;
}
candidate;

int main(void)
{
    candidate candidates_array [3];
    for (int i =0; i< 3; i++)
    {
        candidates_array[i] = get_candidate ("Enter candidate: ");
    }

}

candidate get_president(string prompt)
        {
            printf("%s\n", prompt);
            candidate c;
            c.name = get_string("Name: ");
            c.votes = get_int("Votes: ");
            return c;
        }
