//方法一 qsort
#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b);
int main()
{
    int n,arr[20]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}

int compare(const void *a,const void *b)
{
    return *(int*)b-*(int*)a;
}
