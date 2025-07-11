// Averages three numbers using an array, a constant, and a higher function

#include <cs50.h>
#include <stdio.h>

// Prototype
float average(int length, int array[]);

int main(void)
{
    // Get scores
    int N = get_int("Total: ");
    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("score: ");
    }

    // Print average
    printf("Average: %f\n", average(N,scores));
}

float average(int length, int array[])
{
    // Calculate average
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}
