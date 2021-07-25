#include <stdio.h>
int main()
{
    int n, s;
    scanf("%d %d", &n, &s);
    int a[n];
    int i = 0, j = 0, s_idx, e_idx;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    while (j < n || i < n)
    {
        sum += a[i];
        s_idx = j;
        if (sum == s)
        {
            e_idx = i;
            break;
        }
        if (sum > s)
        {
            sum = 0;
            j++;
            i = j - 1;
        }
        i++;
    }
    printf("%d %d", s_idx + 1, e_idx + 1);
    return 0;
}
