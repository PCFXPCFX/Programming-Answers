#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int main()
{
   int max_long=0,n,count=0,temp;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
    cin>>temp;
    if(temp==1)
    {
        count++;
    }
    else
    {
        count=0;
    }
    max_long=max(max_long,count);
   }
   cout<<max_long;
   return 0;
}
