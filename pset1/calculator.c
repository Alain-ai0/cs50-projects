#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt the user for value x and y.
    int x = get_int("x: ");
    int y = get_int("y: ");
    // make the comp treat the division as a double float.
    printf("%.50lf\n", (double) x / y);
}
