#include <stdio.h>
#include <cs50.h>

// Prototype of the string_length function.
int string_length(string s);

int main(void)
{
    // prompt the user for their name.

    string name = get_string("Name: ");
    // create a variable called length that stores the value of the string length.
    int length = string_length(name);
    // print the string length.
    printf("%i\n", length);

}

// create a function that determines the string length.
int string_length(string s)
{
    // initiate a variable called n starting at zero.
    int n = 0;
    // use a while loop to determine the length of the string starting from the first position and check if the 0th position is null if not increment.
    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}
