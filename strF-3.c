/*
3. Write a function to compare two strings.
*/
#include <stdio.h>
void strCom();
int main()
{
    char str[150], str2[150];
    printf("Enter first word to compare: ");
    gets(str);
    printf("Enter second word to compare: ");
    gets(str2);
    strCom(str, str2);
}
void strCom(char str[],char str2[])
{
    for (int i = 0; i < str[i]; i++)
    {
        if (str[i] != str2[i] && str[i] > str2[i])
        {
            printf("Largest string is: %s", str);
            printf("\nThis is smallest string in the comparision: %s", str2);
            break;
        }
        else if (str[i] != str2[i])
        {
            printf("largest string is: %s", str2);
            printf("\nsecond largest string is: %s", str);
            break;
        }
    }
}