#include <stdio.h>
#include <string.h>

// Function Declaration
int is_palindrome(char s[]);

// Main Function
int main()
{
    char s[1000];
    scanf("%s", s);

    int check = is_palindrome(s);

    check == 0 ? printf("Not Palindrome") : printf("Palindrome");

    return 0;
}

// My Custom Functions
int is_palindrome(char s[])
{
    int i = 0, flag = 1, length;
    length = strlen(s) - 1;

    while (length > i)
    {
        if (s[i++] != s[length--])
        {
            flag = 0;
            return flag;
        }
    }

    return flag;
}