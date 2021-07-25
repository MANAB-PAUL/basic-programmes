#include <stdio.h>
#include <time.h>
long gettime()
{
    struct timeval start;
    mingw_gettimeofday(&start,NULL);
    return start.tv_sec*1000000+start.tv_usec;
}
int main()
{
    long start=gettime();
    int a[1000000] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b;
    a[10000]=11;
    scanf("%d",&b);
    printf("%d",a[b]);
    long end=gettime();
    printf("\n%ld\n",end-start);
    return 0;
}