/*
2. Write a function to reverse a string.
*/
#include <stdio.h>
void strRev();
int main()
{
    char str[150];
    printf("Enter the string to reverse it:");
    gets(str);
    strRev(str);
}
void strRev(char str[])
{
    int j = 150;
    char revStr[j];
    for (int i = 0; i < str[i]; i++)
    {
        revStr[j] = str[i];
        j--;
    }
    printf("Output is : ");
    for (j; j <= 150; j++)
    {
        // if (revStr[j] != 0)
        //{
        printf("%c", revStr[j]);
        //}
    }
}