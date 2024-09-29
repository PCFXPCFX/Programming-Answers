#include <stdio.h>
int main()
{
    long long position,direction,taltolMovement=0,controlNumber;
    scanf("%lld %lld",&controlNumber,&position);
    while(controlNumber--)
    {
        int order;
        scanf("%d",&order);
        if(position==0)
        {
            break;
        }
        if(position>0) direction=-1;
        else direction=1;
        position+=direction*order;
        taltolMovement+=order;
    }
    printf("%lld",taltolMovement);
    return 0;
}
