#include <stdio.h>

int subSum(int *a,int sum,int n)
{
	if(n==0)
		return 0;

	if(sum==0)
		return 1;

	if(a[n-1]>sum)
		return (subSum(a,sum,n-1));

	if(a[n-1]<=sum)
		return (subSum(a,sum-a[n-1],n-1)||subSum(a,sum,n-1));
}

int main() {
	int arr[] = {1,2,3,4};
	int sum = 5;
	if(subSum(arr,sum,4))
		printf("The required sum is present");
	else
		printf("The required sum is not present");

	return 0;
	
	
}
