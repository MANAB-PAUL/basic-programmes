#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];//= {{"Manab"},{"Kumar"},{"Paul"},{"Nathan"}};
    char t[100] = {'\0'};
    char a[100][100] = {'\0'};
    int count = 0;
    int max = 0;
    // scanf("\n");
    // scanf("%[^\n]*c", s);
    gets(s);
    int i = 0;
   for(int j=0;j<strlen(s);j++)
   {
       int k = 0;
      if(!(s[i] != ' '||s[i]!='\0'))
      {
          t[k] = s[i];
          k++;
          max = max>k?max:k;
      }
      else{
     // t[k] = '\0';
      strcpy(a[count],t);
      count++;
      }
   }
   //int h = 0;
    for(int h=0;h<max-1;h++)
   {
     for(int j=0;j<count-1;j++)
       {
           if(a[j][h]!='\0'){
           printf("%c",a[j][h]);
           }         
        }
        printf(" ");
   }

    return 0;
}

