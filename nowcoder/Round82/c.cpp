#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        int input;
        cin>>input;
        if(s.count(input)!=0)
        {
            cout<<"NO";
            return 0;
        }
        s.insert(input);
    }
    cout<<"YES";
    return 0;
}