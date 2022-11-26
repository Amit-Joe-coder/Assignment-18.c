/*
6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)
*/
#include <stdio.h>
void alpstring();
int main()
{
    int i;
    char str[150];
    printf("enter any word or sentence to check whether input has carry any number or symbol:");
    gets(str);
    alpstring(str);
}
void alpstring(char str[])
{
    int i;
    for (i = 0; i < str[i]; i++)
    {
        if (str[i] > 32 && str[i] < 65)
        {
            printf("The '%s' is alphanumeric", str);
            break;
        }
    }
    if (i > str[i])
    {
        printf("The  '%s' is not alphanumeric", str);
    }
}