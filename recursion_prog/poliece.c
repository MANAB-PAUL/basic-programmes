#include <stdio.h>
int res[100][100];
int flag = 0;
int *nq(int n)
{


    if (n == 0)
    {
    }
    int i = n - 1;
    for (int j = 0; j < n; j++)
    {
        res[i][j] = 1;
        int k;
        int l;
        for (k = i, l = j; k < n; k++, l--)
        {
            if(res[k][l]==1 || k>=n || l<0)
            {
                res[i][j] = 0;
                flag = 1;
                break;
            }

            if(flag == 1)
            {
                flag = 0;
                break;
            }

            for (k = i, l = j; k < n; k++, l--)
        {
            if(res[k][l]==1 || k>=n || l<0)
            {
                res[i][j] = 0;
                flag = 1;
                break;
            }
        }

    }

    return res;
}