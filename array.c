#include<stdio.h>
#include<stdlib.h>
int compfunc(const void*a,const void*b)
{
    return (*(int*)a-*(int*)b);
}
int main()
{
    int c;
    int b[100];
    int a[100][100] = {{1,3,4,45,78},{7,9,6,67,89},{10,13,34,100,890},{5,12,78,112,451},{3444,3,1,11,111}};
    c = 4;
    // int k=0;
    printf("\n");
    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=c;j++)
        {
            
            printf("%d\t",a[i][j]);
                    
        }
        printf("\n");
    }

    printf("\n");

    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(j==0||i==0||j==c||i==c){
            printf("%d\t",a[i][j]);}
            else 
            {
                printf("\t");
            }
            
        }
        printf("\n");
    }
    printf("\n");
   int k = 0;
 for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(!(j==0||i==0||j==c||i==c)){
            b[k]=a[i][j];
            k++;
            }
        }
        
    }
    printf("\n");
    for(int i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
    qsort(b,4,sizeof(int),compfunc);
    printf("\n\n");
    for(int i=0;i<k;i++)
    {
        printf("%d ",b[i]);
    }
    int g = k;
    k = 0;
    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=c;j++)
        {
            if(!(j==0||i==0||j==c||i==c)){
            a[i][j]=b[k];
            k++;
            }
        }
        
    }
    //printing the final array
    printf("\n\n");
    for(int i=0;i<=c;i++)
    {
        for(int j=0;j<=c;j++)
        {
            
            printf("%d\t",a[i][j]);
                    
        }
        printf("\n");
    }

}

