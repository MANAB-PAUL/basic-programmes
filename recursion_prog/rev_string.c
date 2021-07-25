#include<stdio.h>
#include<string.h>

//char arr[100];
void rev(char *s,int idx)//function to reverse a string using reccursion
{
    //int i = 0;
    if(idx<0)//Base case condition ----> LOW LEVEL THINKING
        return;
    
    printf("%c",s[idx]);//printing the last term of the string, linking between the expected and assumption case ---> HIGH LEVEL THINKING

    rev(s , idx - 1);//expecting the function to do the the rest of the work
}

void pi(char *s,int idx,int len)//this function takes the string and changes the substring "pi" with "3.14" it's mathematical value by reccursion
{
    if(idx>=len)//base condition ---->LOW LEVEL THINKING
    {
        return;
    }

    if(s[idx]=='p'&&s[idx+1]=='i')//printing the substring "3.14" if substring "pi" is present
    {
        printf("3.14");
        pi(s,idx+2,len);//no need to check for the next as 'i' is the ending and our target starts with 'p'
    }
    else{//else condition what to do if we does not get our target substring
        printf("%c",s[idx]);
        pi(s,idx+1,len);//calling the function, here we need to check the later string too as we don't know the terminating character
    }
    //pi(s,idx+2,len);
}

int main()
{
    char s[100];//stores the string given by the user
    scanf("%[^\n]*c", s);//taking the string as the input from the user
    //rev(s , strlen(s) - 1);//calling the function for printing
    pi(s,0,strlen(s));
    return 0;
}