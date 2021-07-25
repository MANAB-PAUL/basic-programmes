//every duplicates character is removed from the string using recursion
#include<stdio.h>
#include<string.h>

int arr[300] = {0};
void rem(char *c,int idx)
{
    if(idx == 0)
    {
        printf("%c",c[idx]);
        arr[c[idx]]++;
        return;
    }
    rem(c,idx-1);
    if(arr[c[idx]] == 0)
    {
        printf("%c",c[idx]);
    }
    arr[c[idx]]++;
}

int main()
{
    char s[100];
    scanf("%[^\n]*c", s);
    rem(s,strlen(s)-1);
}