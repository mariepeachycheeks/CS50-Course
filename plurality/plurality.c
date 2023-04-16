#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
const int MAX = 9;


// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    for (int j = 0; j < MAX; j++)
    {
        if (candidates[j].name == name)
        {
            candidates[j].votes++;
        }
    }

    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    int swap = 1;
    while (swap != 0){
        for (int k = 0; k < MAX ; k++){
            if (candidates[k].votes < candidates[k+1].votes){
                candidate change = candidates[k];
                candidates[k] = candidates[k+1];
                candidates[k+1] = change;
                swap ++;
                k++;
            }
        }
    printf("candidate‰\n", candidates[MAX].name);
    printf("\n");
    for (int n = MAX; n > 0; n--)
    {

       if (candidates[n].votes == candidates[n-1].votes)
       {
            printf("candidate‰\n", candidates[n-1].name);
            printf("\n");
       }
       return 0;
    }
}