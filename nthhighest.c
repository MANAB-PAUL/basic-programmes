#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int high(int *a,int n,int k)
{
    for(int i=0;i<n;i++)
    {
       // int l = a[i];
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[i])
            {
                count++;
            }
        }
        if(count == k-1)
        {
            return a[i];
        }
    }
    return 0;
}

int main()
{
    int a[] = {6,5,2,78,3,8,139,32,1,43,87,45,529};
    //int s = 11;
    int s = sizeof(a)/sizeof(int);
    printf("%d",high(a,s,2));
}
