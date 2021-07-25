#include <stdio.h>
#include <limits.h>

int kadane(int *a, int n)
{
    int max_sum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        max_sum = sum > max_sum ? sum : max_sum;
        if (sum < 0)
            sum = 0;
    }
    return max_sum;
}

int main()
{
    
    int n;
    scanf("%d ", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int without_wraping = kadane(a, n);
    int sum = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        a[i] = -a[i];
    }
    int wrapping = sum + kadane(a, n);

    int res = wrapping > without_wraping ? wrapping : without_wraping;

    printf("%d\n", res);
    
    return 0;
}