#include <stdio.h>

void print(int n)
{
    if (n == 0)
    {
        printf(" ");
        return;
    }
    if (n <= 0)
    {
        return;
    }
    printf("1");
    print(n - 1);
    if (n >= 2)
    {
        printf("\n");
        printf("2");
        print(n - 2);
        if (n >= 3)
        {
            printf("\n");
            printf("3");
            print(n - 3);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    print(n);
    return 0;
}