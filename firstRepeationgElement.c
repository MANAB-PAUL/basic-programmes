#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int *b;
    int c,d;
    scanf("%d",&c);
    a = (int*)malloc(c*sizeof(int));
    b =(int*)malloc(1000001*sizeof(int));
    for(int i=0;i<1000001;i++)
    {
        b[i] =  0;
    }
    for(int i=0;i<c;i++)
    {
        scanf("%d",&a[i]);
        b[a[i]]++;
    } 
    for(int i=0;i<c;i++)
    {
        if(b[a[i]]>1)
        {
            printf("%d",++i);
            break;
        }
    }
    return 0;
}