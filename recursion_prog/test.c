#include<stdio.h>
int sum = 0;
void bin(int n)
{
    if(n==0)
    {
        return;
    }

    int i = n%2;
    bin(n/2);
    sum = sum *10 + i;

}

int main()
{
    bin(67);
    printf("%d",sum);
    return 0;
}