#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    scanf("\n");
    scanf("%[^\n]*c", s);
    for (char i = 'a'; i <= 'z'; i++)
    {
        int count = 0;
        for (int j = 0; j < strlen(s); j++)
        {
            if (i == s[j])
            {
                count++;
            }
        }
        if(count>0)
            printf("%c->%d\n", i, count);
    }
    return 0;
}