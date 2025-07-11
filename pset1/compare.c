#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("what's x? ");
    int y = get_int("what's y? ");

    if (x < y)
    {
        printf("you dumb\n");
    }
    else if (x > y)
    {
        printf("u a genius\n");
    }
    else
    {
        printf("u fantastic\n");
    }
}
