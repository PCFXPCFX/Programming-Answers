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
//法二 冒泡排序
#include <stdio.h>

int input(int *a) ;
void output(int *a,int n) ;
void swap (int *a, int n);

int main() 
{
    int a[20],n;
    n=input(a);
    swap ( a,  n);
    output( a, n);
}
    


int input(int *a) {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    return n;
}
void output(int *a,int n) {
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}

void swap (int *a, int n)
{
    for(int i=0;i<n;i++)
    {
        int max=a[i];
        int max_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
                max_index=j;
            }
        }
        a[max_index]=a[i];
        a[i]=max;
    }
}
