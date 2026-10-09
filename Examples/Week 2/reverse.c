#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("what is your name: ");
    for (int i = strlen(s) - 1, n = strlen(s); i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}