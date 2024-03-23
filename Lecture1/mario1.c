#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int number;
    do
    {
        number = get_int("Who tall: ");
    }
    while (number < 1 || number > 8);

    for (int i = 0; i < number; i++)
    {
        for (int k = 0; k < (number - i - 1); k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (int p = 0; p <= i; p++)
        {
            printf("#");
        }
        printf("\n");
    }
}
