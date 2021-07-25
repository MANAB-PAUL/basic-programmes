#include<stdio.h>

#include<stdio.h>

//char s[100][100] = {'\0'};
int count = 0;
char** res(char *a)
{
    char s[100][100] = {'\0'};
    int i = 0;
    int j = 0, k = 0;
    while(a[i])
    {
        if(!(a[i] == ' '))
        {           
            s[j][k] = a[i];
            k++;
        }
        else
        {
            k = 0;
            count++;
            j++;
        }
        i++;
    }
    return s;
}

int main()
{
    char b[100];
    char c[100] = {'\0'};
    scanf("%[^\n]*c", b);
    //res(b);
    int k = 0;
    char **s = res(b);
    for(int i=0;i<=count;i++)
    {
        for(int j=0;j<=count;j++)
        {
            if(s[j][i]!='\0')
            {
                c[k] = s[j][i];
                k++;
            }
        }
        c[k] = ' '; 
        k++;       
    }
    printf("%s",c);
    return 0;
}