#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
} candidate;

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
    //Q: how do we check whether the candi is in candi list or not?
    // and if yes -> how do we add the vote to him and return true

    //ans: we need to search the candiates array for the candi name to validate it
    // there is no indication that the candidate list needs to be sorted, and max candidates is constant -> so a simple linear search will do.


    for (int i = 0; i < candidate_count; i++) //why did candidate_count work here, i need to relearn local variables
    {
        // check if candi is valid
        if (strcmp(candidates[i].name, name) == 0)
        {
            // add vote to candi
            candidates[i].votes+=1;
            printf("added one vote to %s\n", candidates[i].name);
            return true;
        }
    }
    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // winner logic -> simple bubble sort, highest votes will be first element or 0th index
    candidate sorted[1];

    for (int i = 0; i < candidate_count; i++)
    {
        for (int j = 1; j < candidate_count; j++)
        {
            if (candidates[i].votes < candidates[j].votes)
            {
                sorted[0] = candidates[i];
                candidates[i] = candidates[j];
                candidates[j] = sorted[0];
            }
        }
    }

    // displays winner with highest votes
    printf("%s\n", candidates[0].name);
    // solves tie problem
    for (int i = 1; i < candidate_count; i++)
    {
        if (candidates[0].votes == candidates[i].votes)
        {
            printf("%s\n", candidates[i].name);
        }
    }
    return;
}
