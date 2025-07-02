#include <cs50.h>
#include <stdio.h>

void print_pyramid(long height);
int main(void)

{
    long height;
    do
    {
        height = get_long("Height: ");
    }
    while (height < 1);
    print_pyramid(height);
}

void print_pyramid(long height)
{
    for (long i = 0; i < height; i++)
    {
        for (long j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        for (long k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

