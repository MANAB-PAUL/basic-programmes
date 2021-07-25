#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%[^\n]*c", s);
    int i = 0;
    if (s[0] >= 97 && s[0] <= 122)
        s[0] = s[0] - 32;
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            if (s[i + 1] >= 97 && s[i + 1] <= 122)
                s[i + 1] = s[i + 1] - 32;
        }
        else
        {
            if (s[i + 1] >= 65 && s[i + 1] <= 90)
                s[i + 1] = s[i + 1] + 32;
        }
        i++;
    }

    printf("%s", s);
    return 0;
}