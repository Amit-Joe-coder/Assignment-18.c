/*
1. Write a function to calculate length of the string
*/
#include <stdio.h>
int Strlen();
int main()
{
    printf("length of the string is: %d", Strlen());
}
int Strlen()
{
    char str[100];
    printf("enter the sentence to count the length of the sentence: \n");
    gets(str);
    int count;
    for (int i = 0; i < str[i]; i++)
    {
        count++;
    }
    return count;
}