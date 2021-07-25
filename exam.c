#include<stdio.h>
#include<math.h>
int check(int n)
{
    int count = 0;
    while(n)
    {
        int i = n%10;
        count += i;
        n/=10;        
    }
    //printf("%d",count);
    if(count%2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    int count = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(check(i))
        {
            if(check(i+1)&&i+1!=n)
            {
                printf("%d\n",i);
                count++;
                i++;
            }
        }
    }
    printf("\n%d",count);
    return 0;
    
}