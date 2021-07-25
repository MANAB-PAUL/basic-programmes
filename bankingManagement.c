#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

typedef struct account
{
    int acc_no;
    char name[100];
    char pass[101]; //this is password : it can have anything including spaces
    int balance;
} acc;
acc *a;

int main()
{
    int b,i=1;
    //This takes the input
    a=(acc*) malloc(sizeof(a));
    a[0].acc_no=0;
    scanf("[^\n]*c",a[0].name);
    scanf("[^\n]*c",a[0].pass);
    scanf("%d",&a[0].balance);
    abc:
    scanf("%d",&b);
    if(b)
    {
    
        a=(acc*) malloc(sizeof(a));
        a[i].acc_no=i;
        scanf("[^\n]*c",a[i].name);
        scanf("[^\n]*c",a[i].pass);
        scanf("%d",&a[i].balance);
        //scanf("%d",&b);
        i++;
        goto abc;
    }

    printf("1 for viewing ");
} 
