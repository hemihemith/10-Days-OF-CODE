#include <stdio.h>

int main() 
{
    char str[150];
    int vowels;

    vowels = 0;

    printf("Please Enter a string: ");
    gets(str);

    for (int i = 0; str[i] != '\0'; ++i)
        {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                str[i] == 'o' || str[i] == 'u')
            {
                ++vowels;
            }
        }

    printf("The Vowels are :  %d", vowels);
    return 0;
}
