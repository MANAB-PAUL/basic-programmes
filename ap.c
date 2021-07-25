#include<stdio.h>
#include<math.h>

int check(int a, int s)
{
    int n = ((1-2*a) + (int)sqrt((2*a - 1)*(2*a-1)+(4*2*s)))/2;
    float b = ((1-2*a) + sqrt((2*a - 1)*(2*a-1)+(4*2*s)))/2.0;

    int c = ((1-2*a) - (int)sqrt((2*a - 1)*(2*a-1)+(4*2*s)))/2;
    float d = ((1-2*a) - sqrt((2*a - 1)*(2*a-1)+(4*2*s)))/2.0;

    if(n == b && n>0)
    {
        return n;
    }
    else if(c==d && c>0)
    {
        return c;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int s;
    scanf("%d",&s);
    int a = 1;
    while(2*a+1<=s)
    {
        int n = check(a,s);
        if(n>0)
        {
            printf("%d -> %d\n",a,a+n-1);
            for(int i=a;i<a+n;i++)
            {
                printf("%d+",i);
            }
            printf("\n");
        }
        a++;
    }
    return 0;

}