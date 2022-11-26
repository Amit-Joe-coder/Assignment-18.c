/*
8. Write a function to count words in a given string
*/
#include <stdio.h>
void wordCont();
int main()
{

    char str[150];
    printf("enter any sentence to count the number of words: ");
    fgets(str, 150, stdin);
    wordCont(str);
}
void wordCont(char str[])
{
    int count = 1;
    for (int i = 0; i < 122; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    printf("%d", count);
}