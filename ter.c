#include <stdio.h>
#include <math.h>
int main()
{
    int count = 0;
    for (int i = 2010; i <= 2099; i++)
    {
        if (i == 2020)
            continue;
        int j = i % 100;
        int k = i / 100;
        int h = j * k;
        int m = sqrt(h);
        float n = sqrt(h);
        if (n == m)
        {
            printf("%d %d\n", i, h);
            count++;
        }
    }
    printf("%d", count);
    return 0;
}