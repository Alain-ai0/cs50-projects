#include <cs50.h>
#include <stdio.h>

void print_pyramid(int height);
int main(void)
{
    // prompt the user for an integer that is between 1 and 8.
    int height;
    do
    {
        height = get_int("Height: ");
    }
    // setting the condition that continues to prompt the user for the height if the number is not
    // in this set (1 to 8).
    while (height < 1 || height > 8);
    // printing the adjacent pyramids.
    print_pyramid(height);
}
// creating a function called print_pyramid that doesn't return a value.
void print_pyramid(int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("  ");
        for (int l = 0; l <= i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
