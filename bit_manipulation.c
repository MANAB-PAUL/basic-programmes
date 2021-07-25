#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int getBit(int n, int pos)
{
    int t = (1<<pos);
    int k = (t & n);
    if(k==0)
    {
        return 0;
    }
    else{
        return 1;
    }
}

int setBit(int m,int pos, int n)
{
    int t = (1<<pos);
    t = (~t);
    int res = (t&m);
    if(n==0)
    {
        return res;
    }
    if(n==1){
    int s = 1<<pos;
    res = res | s;
    return res;
    }

}

int check(int n)
{
    int t = sqrt(n);
    float a = sqrt(n);
    printf("%f %d",a,t);
    float g = (t-a);
    printf("\n%f\n",g);
    if(t == a)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int cnt(float a)
{
    int b = (int)a;
    float c = a;
    
    int countr = 0;
    c = c * 1000000;
    int d = (int)c;
    while(d)
    {
        int e = d % 10;
        if(e == 0)
        {
            countr = countr + 1;
        }
        else
        {
            break;
        }
        d = d / 10;             
    }
    int f = 6 - countr;
    //printf("%d\n",countr);
    return f;
}

int ch(int n)
{
    if(((n)&(n-1)) == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void seq_arr(int arr[], int n)
{
    int t = pow(2,n);
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(getBit(i,j) == 1)
            {
                printf("%d ",arr[j]);
            }
        }
        printf("\n");
    }

}
int maxN = 10000;
int b[10005];
void seive()
{
    for(int i=0;i<maxN;i++)
    {
        b[i] = -1;
    }

    for(int i=2;i<maxN;i++)
    {
        if(b[i] == -1)
        {
            for(int j=i; j<maxN; j+=i)
            {
                if(b[j] == -1)
                {
                    b[j] = i;
                }
            }
        }
    }
    //return;
}

void prime(int n)
{
    
    void seive();
    while(n)
    {
        printf("%d X ",b[n]);
        
        int c = b[n];
        n = n / c;
    }
    printf("1");
    //return;
}

int main()
{
    
    int a[100],n,count = 0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    seq_arr(a,n);
    return 0;
}