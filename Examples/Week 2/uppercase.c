#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string s = get_string("Lowercase: ");
    printf("Uppercase: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //if [i] is between a and z, subtract 32 from it to make it uppercase
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        
        //if [i] is not between a and z, print it as is
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}