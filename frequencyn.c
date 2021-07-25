#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int max = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
          max = a[i];
    }

    int b[max+1];
    for(int i=0;i<=max;i++)
    {
        b[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        int z=a[i];
        b[z]++;
    }
    for(int i=1;i<=max;i++)
    {
        if(b[i]>0)
        printf("%d->%d\n",i,b[i]);
    }
    return 0;


}