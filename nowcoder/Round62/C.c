#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
#define pi 3.14159265358
#define INF 1e18 
 
int compare(const void* a, const void* b) {//板子
    return (*(double*)a > *(double*)b) - (*(double*)a < *(double*)b);
}
 
int main()
{
    long long  curcleNumber,inYuan=0,k;
    double cost[100000]={0},taltolCost=0.0;
    scanf("%lld %lld",&curcleNumber,&k);
    for(int i=0;i<curcleNumber;i++)
    {
        long long  x,y,r;
        double d;
        scanf("%lld %lld %lld",&x,&y,&r);
        d= sqrt(x*x+y*y);
        if(d>=r)
        {
            continue;
        }
        else
        {
            cost[inYuan++]=(r-d)*pi*r*r;
        }
    }
     
    if(inYuan<k)    printf("0.000000000000000\n");
    else
    {
        long long  Number=inYuan-k;
        qsort(cost, inYuan, sizeof(double), compare);
        for (long long i = 0; i < Number; i++) 
            taltolCost += cost[i];
        printf("%.15lf",taltolCost);
    }
    return 0;
    }
