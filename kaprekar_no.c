#include<stdio.h>

int kap(long long n)
{
    long long a = n * n;
    int i = 10;
    while(1)
    {
        long long b = a%i;
        long long c = a/i;
        if(b + c == n && c!=0)
        {
            return 1;
        }

        if(c == 0)
            break;
        
        i*=10;
    }
    return 0;
}

int main()
{
    int a;
    scanf("%d",&a);
    if(kap(a))
    {
        printf("yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}