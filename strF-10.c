#include <stdio.h>
int main()
{
    char str[150], temp[150];
    printf("enter any word:");
    gets(str);
    for (int i = 0; i < str[i]; i++)
    {
        for (int j = i + 1; j < str[i]; j++)
        {
            if (str[j] == str[i])
            {
                printf("This is repeating: %c\n", str[i]);
                continue;
            }
        }
    }
}
