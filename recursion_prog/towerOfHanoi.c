#include<stdio.h>
//long long count = 0;
void hanoi(int n,int s,int d,int h)
{
    if(n==1)
    {
        printf("%d to %d\n",s,d);
        return;
    }

    hanoi(n-1,s,h,d);
    printf("%d to %d\n",s,d);
    hanoi(n-1,h,d,s);

}

int main()
{
    hanoi(11,1,2,3);
    return 0;
}