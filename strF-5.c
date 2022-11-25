/*
5. Write a function to transform a string into lowercase
*/
#include <stdio.h>
void strLower();
int main()
{
    char str[150], str2[150];
    printf("Enter any word to  convert it into lowercase:");
    gets(str);
    strLower(str);
}
void strLower(char str[])
{
    for (int i = 0; i < str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }
    printf("Output is: ");
    for (int i = 0; i < str[i]; i++)
    {
        printf("%c", str[i]);
    }
}