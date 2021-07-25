//This is the program to find the maximum contegious sum of array here we use our brain we created an array for storing cummelative sum where index i stores sum of the main array elements from 0 to i then we  can say b[i] - b[j] stores sum of array from index j to i then we compared the sum and find the maximum of all   

//the time complexity of this solution is O(n^2) which is better than brute force which is of time complexity O(n^3)

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int max(int a, int b)
{
    int res = a > b ? a : b;
    return res;
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];//main array input by user
    int b[n + 9]; //this array stores the cummelative sum of array a
    for (int i = 0; i < n; i++)
    {
        scanf("%d", a + i);
    }
    b[0] = a[0];
    for (int i = 1; i <= n; i++)
    {
        b[i] = b[i - 1] + a[i];
    }
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = b[i] - b[j];
            max_sum = max(sum, max_sum);
        }
    }
    printf("%d", max_sum);
}