#include <cs50.h>   // For using get_string()
#include <ctype.h>  // For character functions like toupper(), isalpha()
#include <stdio.h>  // For input/output like printf()
#include <string.h> // For string length function strlen()

// prototype
int compute_score(string word);

int main(void)
{
    // An array that stores all the points equivalent to a letter from A to Z
    // A=1, B=3, ..., Z=10
    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    // Array to store the two players' words
    string players[2];

    // Prompt Player 1 to enter a word
    players[0] = get_string("Player 1: ");

    // Prompt Player 2 to enter a word
    players[1] = get_string("Player 2: ");

    // calculate each player's score using the compute_score function
    int score1 = compute_score(players[0]);
    int score2 = compute_score(players[1]);

    // Compare scores and print who won (or if it's a tie)
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

// create a function that takes a word and calculates its total scrabble score
int compute_score(string word)
{
    // The array that has the points for each letter
    int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    // initialize a variable that returns an integer called total that start from zero
    int total = 0;

    // create a Loop that goes through each character of the word
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        char c = word[i]; // Get the current character of the word

        // Check if it's an alphabet letter (numbers and symbols are to be ignored)
        if (isalpha(c))
        {
            // Convert to uppercase (A-Z)
            c = toupper(c);

            // Find its position in the POINTS array
            int position = c - 'A';

            // add the corresponding points to the total
            total += POINTS[position];
        }
    }

    // Return the total score for the word
    return total;
}
