#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    scanf("%[^\n]*c", s);
    int i = 2;
    if (s[0] >= 97 && s[0] <= 122)
        s[0] = s[0] - 32;

    if (s[1] >= 65 && s[1] <= 90)
        s[1] = s[1] + 32;

    while (s[i] != '\0')
    {
        if (s[i] == '.')
        {
            int j = 0;
            while (s[i + j] != '\0')
            {
                if (s[i + j] >= 97 && s[i + j] <= 122)
                {
                    s[i + j] = s[i + j] - 32;
                    i += j;
                    i++;
                    break;
                }

                if (s[i + j] >= 65 && s[i + j] <= 90)
                {
                    i += j;
                    i++;
                    break;
                }
                j++;
            }
        }

        if ((s[i] >= 65 && s[i] <= 90) && s[i - 1] != ' ')
        {
            s[i] = s[i] + 32;
        }
        i++;
    }
    printf("%s", s);
    return 0;
}
