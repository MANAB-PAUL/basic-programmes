#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int score = 0;
int a,res,k,i,j;
void getQues()
{
    srand(time(NULL));
    a = rand() % 4;
    i = rand();
    j = rand();
    switch(a)
    {
        case 0:
            i = i % 10000;
            j = j % 10000;
            printf("%d + %d = ",i,j);
            scanf("%d",&k);
            
            if(k == i + j)
            {
                score += 4;
            }
            else
            {
                score--;
            }
            break;
        case 1:
            i = i % 10000;
            j = j % 10000;
            printf("%d - %d = ",i,j);
            scanf("%d",&k);
            
            if(k == i - j)
            {
                score += 4;
            }
            else
            {
                score--;
            }
            break;
        case 2:
            i = i % 10000;
            j = j % 100;
            printf("%d X %d = ",i,j);
            scanf("%d",&k);
            
            if(k == i * j)
            {
                score += 4;
            }
            else
            {
                score--;
            }
            break;
        case 3:
            i = i % 10000;
            j = j % 100;
            printf("%d / %d = ",i,j);
            scanf("%d",&k);
            
            if(k == i / j)
            {
                score += 4;
            }
            else
            {
                score--;
            }
          break;



    }
}

int main()
{
    clock_t p = clock() + 30000;
    while(1)
    {
        printf("%d\n",(int)clock());
      // system("cls");
        getQues();
        if(p<clock())
        {
            break;
        }
    }
    //getQues();
    printf("Finale score is %d",score);
    getch();
    return 0;
}