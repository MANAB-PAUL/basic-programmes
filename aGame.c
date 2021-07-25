#include<stdio.h>
int main()
{
    char c;
    int k = 10;
    int s = 0;
    //char a[10000000][100000000];
    //initial storing
    for(int i=s;i<k;i++)
    {
        for(int j=s;j<k;j++)
        {
            printf("* ");
        }
        printf("\n");
    }


    //initial printing
    //for(int i=0;i<k)


    while(1)
    {
        //scanf(%c)
        scanf("%c",c);
        if(c == 'd')
        {
            k++;
            for(int i=s;i<k;i++)
            {
                for(int j=s;j<k;j++)
                {
                    if(j==s)
                    {
                        printf(" ");
                    }
                    else{
                        printf("* ");
                    }
                }
                printf("\n");
            }
            s++;
        }
    }
    return 0;
}     