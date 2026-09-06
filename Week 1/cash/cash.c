#include <stdio.h>
#include <cs50.h>

int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents;
    do{
        cents = get_int("Changes Owed: ");
        }
    while (cents < 0);

    //Calculate the number of quarters to give to customer
    int quarters = calculate_quarters(cents);

    // Subtract quarters from cents
     cents = cents - (quarters * 25);

    //Calculate the number of dimes to give to customer
    int dimes = calculate_dimes(cents);

    //Subtract dimes from cents
    cents = cents - (dimes * 10);

    //Calculate the number of nickels
    int nickels = calculate_nickels(cents);

    //Subtract nickels from cents
    cents = cents - (nickels * 5);


    // Calculate the number of pennies
    int pennies = calculate_pennies(cents);

    //Subtract pennies from cents
    cents = cents - (pennies * 1);

    int coins = quarters + dimes + nickels + pennies;
    printf("%i\n", coins);
}

int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
        }
    return quarters;
    }

int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
        }
    return dimes;
    }

int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels ++;
        cents = cents - 5;

        }
    return nickels;
    }

int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies ++;
        cents = cents -1;
        }
    return pennies;
    }

