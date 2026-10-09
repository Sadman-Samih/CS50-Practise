#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Input: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] > s[i + 1])
        {
            printf("No\n");
            return 1;
        }
        else
        {
            printf("Yes\n");
            return 0;
        }
    }
    
}
