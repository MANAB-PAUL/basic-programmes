//First pattern question

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=5;i>=1;i--)
//     {
//             int count = 1;
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",count);
//             count++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
//


// Next pattern question


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         {
//             if((i+j)%2==0)
//             {
//                 printf("1 ");
//             }
//             else{
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
    
// }


// Next Pattern Question


// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             printf(" ");
//         }
//         for(int j=1;j<n;j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
    
// }

//next pattern question

// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i;j++)
//         {
//             printf(" ");
//         }
//         int count = 1;
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",count);
//             count++;
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Next pattern question

// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n-i+1;j++)
//         {
//             printf(" ");
//         }
//        for(int j=i;j>1;j--)
//         {
//             printf("%d ",j);
//         }
//         for(int j=1;j<=i;j++)
//         {
//             printf("%d ",j);
//         }
//         printf("\n");
//     }

    
//     return 0;
// }

//Next pattern question 
//these all questions are taken from Apni Kaksha

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
           
            printf(" ");
            
        }
        printf(" ");
        for(int j=1;j<=i;j++)
        {
            printf("* ");
        }
        for(int j=1;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");

    }
    return 0;
}