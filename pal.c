#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[100];
 gets(s);
//     printf("%s",s);
    //printf("Enter any string\n");
        //gets(s);
        //puts(s);
    // strlen(s);
    // int i = 0;
    // int count = 0;
    // while(s[i]!='\0')
    // {
    //     if(s[i] == ' ')
    //     {
    //         count++;
    //     }
    //     i++;
    // }
    
    char a[100][100];


    int m = 0;
    int j = 0;
    int k = 0;
     while(s[j]!='\0')
    {
        //a[m] = (char*)malloc(100*sizeof(char));
        k = 0;
        while(s[j]!=' '||s[j]!='\0')
        {
            a[m][k] = s[j];
            j++;
            k++;
        }
        a[m][k] = '\0';
        m++;
        j++;        
    }
    a[m][k] = '\0';
    for(int i=0;i<m;i++)
    {
        printf("%s\n", a[i]);
    }
    return 0;
    
}