#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    char d[100];
    for (int i = 0; i < 100; i++)
    {
        d[i] = '\0';
    }
    scanf("\n");
    scanf("%[^\n]*c", s);
    int l = strlen(s);
    int j = 0;
    int k = 1;
    d[0] = s[0];

    for (int i = 0; i < l; i++)
    {
        int flag = 1;
        for (int j = 0; j < k; j++)
        {
            if (s[i] == d[j]&&s[i]!=' ')
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            d[k] = s[i];
            k++;
        }
    }
    printf("%s", d);
    return 0;
}