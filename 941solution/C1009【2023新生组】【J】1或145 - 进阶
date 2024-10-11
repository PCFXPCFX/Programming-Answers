#include <stdio.h>
int fun(int n);
long long fastpow(int a,int b);
int main()
{
	
	int n;
	scanf("%d",&n);
	if(n==1||n==145)
	{
		printf("%d",n);
		return 0;
	}
	fun(n);
	return 0;
}

int fun(int n)
{
	if(n==1||n==145) return 1;
	else
	{
		int sum=0;
		printf("%d->",n);
		int fis=0;
		// while(n!=0)
		// {
		//     if(fis) printf("+");
		//     fis=1;
		//     printf("%d*%d",n%10,n%10);
		//     sum+=(n%10)*(n%10);
		//     n/=10;
		// }
		int t=n;
		int count=0;
		while(t!=0)
		{
			count++;
			t/=10;
		}
		for(int i=fastpow(10,count-1);i>=1;i/=10)
		{
			if(fis) printf("+");
			fis=1;
			printf("%d*%d",n/i%10,n/i%10);
			sum+=(n/i%10)*(n/i%10);
		}
		printf("=%d\n",sum);
		return fun(sum);
	}
	
	
	
}

long long fastpow(int a,int b)
{
	if (b==0) return 1;
	long long r=fastpow(a,b/2);
	if(b%2==0)
	{
		return r*r;
	}
	else
	{
		return r*r*a;
	}
}
