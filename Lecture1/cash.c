#include <cs50.h>
#include <stdio.h>

int get_cash(void);
int get_coin25(int cash);
int get_coin10(int cash);
int get_coin5(int cash);
int get_coin1(int cash);

int main(void)
{
    int cash = get_cash();
    printf("Cash Given: %i$\n", cash);

    int coin25 = get_coin25(cash);
    printf("Coins of 25: %i\n", coin25);

    cash = cash - (25 * coin25);
    int coin10 = get_coin10(cash);
    printf("Coins of 10: %i\n", coin10);

    cash = cash - (10 * coin10);
    int coin5 = get_coin5(cash);
    printf("Coins of 5: %i\n", coin5);

    cash = cash - (5 * coin5);
    int coin1 = get_coin1(cash);
    printf("Coins of 1: %i\n", coin1);

//Sum the number of quarters, dimes, nickels, and pennies used and Print that sum.
    int sum = coin25 + coin10 + coin5 + coin1;
    printf("Sum of coins: %i\n", sum);
}

//Prompt the user for change owed, in cents.
int get_cash(void)
{
    int n;
    do
    {
        n = get_int("Change owed: ");
    }
    while (n < 0);
    return n;
}

//Calculate how many quarters you should give customer. Subtract the value of those quarters from cents.
int get_coin25(int cash)
{
    return cash / 25;
}

//Calculate how many dimes you should give customer. Subtract the value of those dimes from remaining cents.
int get_coin10(int cash)
{
    return cash / 10;
}

//Calculate how many nickels you should give customer. Subtract the value of those nickels from remaining cents.
int get_coin5(int cash)
{
    return cash / 5;
}

//Calculate how many pennies you should give customer. Subtract the value of those pennies from remaining cents.
int get_coin1(int cash)
{
    return cash / 1;
}
