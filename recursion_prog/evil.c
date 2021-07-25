#include<stdio.h>
int check_evil_number(int n)
{
    int count = 0;
    while(n)
    {
        n = n&(n-1);
        count++;
    }
    if(count%2==0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(check_evil_number(n))
        printf("EVIL NUMBER\n");

    else
        printf("NOT EVIL NUMBER\n");
    // printf("%d",getBit(65));
    return 0;
}