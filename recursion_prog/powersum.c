#include<stdio.h>
#include<math.h>


int powerSum(int *arr, int idx, int sum, int N)
{
    if(sum == 0)
    {
        // count++;
        return 1;
    }

    if(sum < 0 || idx < 0)
    {
        return 0;
    }
    int count = (powerSum(arr, idx - 1, sum - pow(arr[idx], N), N) + powerSum(arr, idx - 1, sum, N));
     return count;


}

int main()
{
    int arr[] = {0,1,2,3,4,5,7,8,9,10};
    printf("%d\n",powerSum(arr,10,100,2));
    // printf("%d",count);
    return 0;
}
