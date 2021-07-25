//kadanes algorithm for finding maximum sum subarray problem solution within time complexity O(N)
#include<stdio.h>
#include<limits.h>

int max(int a,int b)
{
    int res = a>b?a:b;
    return res;
}


int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int sum = 0;
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
        max_sum = max(sum,max_sum);
        if(sum<0)
        {
            sum = 0;
        }
    }

    printf("%d",max_sum);
    return 0;

}