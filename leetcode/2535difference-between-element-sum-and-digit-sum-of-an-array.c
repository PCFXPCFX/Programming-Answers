#include <stdio.h>
int differenceOfSum(int* nums, int numsSize) {
    int sum=0,calcsum=0;
    for(int i=0;i<numsSize;i++)
    {
        int temp=nums[i];
        sum+=temp;
        while(temp!=0)
        {
            calcsum+=temp%10;
            temp/=10;
        }
    }
    return abs(calcsum-sum);

    
}
