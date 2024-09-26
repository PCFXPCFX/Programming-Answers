#include <stdio.h>
int main()
{
    int store[9]={0},merit[9]={0},n,m,sum=0,maxPrize,maxPrizeI;
    int prize[9]={0,9,7,8,5,6,3,4,2};
    scanf("%d %d",&n,&m);
    while(n--)//获取宝石
    {
        int temp,income;
        scanf("%d",&temp);
        scanf("%d",&income);
        store[temp]+=income;
    }  
    for(int i=1;i<=8;i++)//更新第一次prize
    {
        if(store[i]>=64)
            merit[i]=64*prize[i];
        else
            merit[i]=store[i]*prize[i];
    }   
    while(m--)//m次交易
    {
        if(store[1]==0&&store[2]==0&&store[3]==0&&store[4]==0&&store[5]==0&&store[6]==0&&store[7]==0&&store[8]==0)
            break;
        maxPrize=0;
        maxPrizeI=0;
        for(int i=1;i<=8;i++)
        {
            if(merit[i]>maxPrize)
            {
                maxPrize=merit[i];

                maxPrizeI=i;
            }
        }
        sum+=maxPrize;
        store[maxPrizeI]-=maxPrize/prize[maxPrizeI];
        if(store[maxPrizeI]>=64)
            merit[maxPrizeI]=64*prize[maxPrizeI];
        else
            merit[maxPrizeI]=store[maxPrizeI]*prize[maxPrizeI];
    }
    printf("%d",sum);
}
