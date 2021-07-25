#include<stdio.h>

void print(int n)
{
    if(n>0)
    {
        printf("Hello World\n");
        return print(n-1);
    }
    else
    {
        return;
    }
}

int main()
{
    print(10);
    return 0;
}
/*Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World
Hello World*/