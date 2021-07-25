#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("\n");
    scanf("%[^\n]*c", s);
    int l = strlen(s);
    int a[30];
    for(int i=0;i<30;i++)
    {
        a[i] = 0;
    }
    int i = 0;
    while(s[i]!='\0')
    {
        a[s[i]-96]++;
        i++;
    }

    for(int i=0;i<30;i++)
    {
        if(a[i]>0)
        {
            printf("%c->%d\n",i+96,a[i]);
        }
    }
    return 0;

}