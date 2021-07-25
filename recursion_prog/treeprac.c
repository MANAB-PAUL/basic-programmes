#include<stdio.h>

int sorted(int *arr,int idx)
{
    int flag = 1;
    if(idx == 0)
    {
        return 1;
    }

    int temp = sorted(arr,idx-1);
    if((temp)&&(arr[idx]>arr[idx-1]))
        return 1;
    else
        return 0;
} 

int main()
{
    int arr[] = {10,4,30,40};
    printf("%d",sorted(arr,3));
}