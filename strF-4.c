/*
4. Write a function to transform string into uppercase
*/
#include <stdio.h>
void strUpper();
int main()
{

    char str[150], str2[150];
    printf("Enter any word having character upto 150:");
    gets(str);
    strUpper(str);
}
void strUpper(char str[])
{
    int i;
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] > 90)
        {
            str[i] = str[i] - 32;
        }
    }
    for (i = 0; i < str[i]; i++)
    {
        printf("%c", str[i]);
    }
}
