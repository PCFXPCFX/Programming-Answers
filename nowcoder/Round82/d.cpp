// 错误答案：  运行状态：答案错误 得分：14.52
// #include<bits/stdc++.h>
// using namespace std;
// #define MOD 998244353
// using ll = long long;


// int solve() {
//     ll n;
//     cin >> n;
//     ll arr[n];
//     ll count = 0;
//     ll sum=1;
//     cin >> arr[0];
//     for (int i = 1; i < n; i++) {
//         cin >> arr[i];
//         if(arr[i]>n)
//         {
//             cout<<"0"<<endl;
//             return 0;
//         }
//         if (arr[i] != arr[i - 1]) {
//             count++;
//         }
//         if (arr[i] > n - i) {
//             cout << "0"<<endl;
//             return 0;
//         }
//     }
//     count = n - count-1;
//     // cout<<count<<" ";
//     while(count >=1)
//     {
//         sum = (sum% MOD *count% MOD) % MOD;
//         count--;
//     }
//     cout << sum << endl;

//     return 0;
// }

// int main() {
//     int n;
//     cin>>n;
//     while(n--)
//     solve();
//     return 0;
// }
/*
思路：
第一个数字一定是排列第一个数字（特判）
prefix[i]=min(prefix[i-1],a[i])
不变 p2>p1
变小 p2<p1
         1 2 3 4 5 6 7 8 9 10
prefix= {x x x x y y y y z z }
(x>y>z)
x<=y ||y<=z 直接输出0 此时prefix不合法
p1=x
p5=y
p9=z

p2>p1 p3>p1

[x,x,x...][y,y,y,y...][z,z,z,z...]
x>y>z

7
6 2 2 1 1 1 1
填入： 3 4 5 7
p1=6
p2=2
p3>2 可填入4个
p4=1
p5>1 可填(4-1)=3个
p6>1 可填(3-1)=2个
p7>1 可填(2-1)=1个
1*2*3*4=24 所以我的方法算在例题中计算是正确的
ans =1
创建一个变量 now 表示当前还能用的数字个数 now = n-a[i];
if(相邻数字相同)
{
    ans*=now
    now--
}
else if（递增）
{
cout 0
return
}
else{
此时能用的数字变多了
因为prefix变低了，所以now变多了
n=7
6 6 2 2...
p1 = 6
p2 now=(7)
p3 =2
p4 now=(3,4,5)
now +=a[i-1]-a[i] 即水位线下降释放的数字个数（能用的个数）
}
ans%=MOD

原来的方法没有考虑可选项的增加，导致的错误。
*/
// 错误答案：  运行状态：答案错误 得分：14.52
#include<bits/stdc++.h>
using namespace std;
#define MOD 998244353
using ll = long long;


int solve() {
    ll n;
    cin >> n;
    ll arr[n];
    ll count ;
    ll sum=1;
    cin >> arr[0];
    count = n - arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        if(arr[i]>arr[i-1])
        {
            cout<<"0"<<endl;
            return 0;
        }
        else if(arr[i]<arr[i-1])
        {
            count+=arr[i-1]-arr[i]-1;
        }
        else
        {
            sum *= count;
            sum %= MOD;
            count --;
            // cout<<sum<<endl;
        }

        if(arr[i]>n-i+1)
        {
            cout<<"0"<<endl;
            return 0;
        }
        
    }
    
    cout << sum << endl;

    return 0;
}

int main() {
    int n;
    cin>>n;
    while(n--)
    solve();
    return 0;
}