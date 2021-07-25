//changing the word in uppercase after every space character
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[100];
    char d[1000][1000];
    scanf("\n");
    scanf("%[^\n]*c", s);
    int i = 0;
    int count = 0;
    if (s[0] >= 97 && s[0] <= 122)
        s[0] = s[0] - 32;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            if (s[i + 1] >= 97 && s[i + 1] <= 122)
                s[i + 1] = s[i + 1] - 32;
        }
        i++;
    }

    printf("%s", s);
    return 0;
}