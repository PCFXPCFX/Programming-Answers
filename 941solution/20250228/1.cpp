#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct Person {
    char name[20];      // 候选人姓名
    int count;          // 得票数
} leader[3] = {"Li", 0, "Zhang", 0, "Sun", 0};

int main()
{
    ll n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int i=0;i<3;i++)
        {
            if(s==leader[i].name)
            {
                leader[i].count++;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<leader[i].name<<':'<<leader[i].count<<endl;
    }
    return 0;

}