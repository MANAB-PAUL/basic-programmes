/*MAGIC SQUARE*/

#include<stdio.h>
#include<conio.h>
int n[101][101] = {0};
void res(int s)
{
    n[0][s/2] = 1;
    int count = 2;
    int i = 0, j = s/2; 
    while(count <= (s*s))
    {
        i = i - 1;
        j = j + 1;
        if((i<s && i>=0) && (j<s && j>=0))
        {
            if(n[i][j] ==0){
            n[i][j] = count;
            count++;
            }
            else{
                i = i + 2;
                j--;
                n[i][j] = count;
                count++;
            }
        }
        if((j<s && j>=0) && !(i<s && i>=0))
        {
            i = s - 1;
            //j = j + 1;
            n[i][j] = count;
            count++;
        }
        if(!(j<s && j>=0) && (i<s && i>=0))
        {
            j = 0;
            n[i][j] = count;
            count++;
        }
        if(!(j<s && j>=0) && !(i<s && i>=0))
        {
            i = i + 2;
            j--;
            n[i][j] = count;
            count++;
        }
        
    }

}

void print(int s)
{
    res(s);
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf("%d\t",n[i][j]);
        }
        printf("\n");
    }

}

int main()
{
    int s;
    scanf("%d",&s);
    print(s);
    //getch();
    return 0;
}