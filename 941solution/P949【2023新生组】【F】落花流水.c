P949
 #include <stdio.h>
 long long  max(long long a,long long b);
 int main()
 {
     int n,m;
     scanf("%d %d",&n,&m);
     long long arr[100][100]={0};
     int input[100][100]={0};
     
    for(int i=0;i<n;i++)//输入
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&input[i][j]);
        }
    }
   //初始化第一行和第一列
    arr[0][0]=input[0][0];
    for(int i=1;i<m;i++)
    {
        arr[0][i]=arr[0][i-1]+input[0][i];
    }
    for(int i=1;i<n;i++)
    {
        arr[i][0]=arr[i-1][0]+input[i][0];
    }
    //生成最佳收集表
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            arr[i][j]=max(arr[i-1][j],arr[i][j-1])+input[i][j];
        }
    }
    //输出答案
    printf("%lld",arr[n-1][m-1]);
     
 }
 
  long long  max(long long a,long long b)//max函数
 {
     return a>b?a:b;
 }
 
