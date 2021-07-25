#include <stdio.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void pairsum(int *a, int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high&&high>=0&&low<n)
    {
        if (a[low] + a[high] == k)
        {
            printf("%d %d\n", a[low], a[high]);
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    printf("-1\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int k;
    scanf("%d", &k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    qsort(a, n, sizeof(int), cmpfunc);
    pairsum(a, n, k);
    return 0;
}