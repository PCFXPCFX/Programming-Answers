#include<bits/stdc++.h>
using namespace std;
using ll = long long;
struct Person {
    char name[10];      // 候选人姓名
    int number;
    double score;
    bool is_output=false;
} ;

bool cmp(Person a,Person b)
{
    return a.score>b.score;
}

int main()
{
  int n;
  cin>>n;
  struct Person stu[n];
  for(int i=0;i<n;i++)
  {
      cin>>stu[i].number;
      cin>>stu[i].name;
      cin>>stu[i].score;
  }
  sort(stu,stu+n,cmp);
  for(int i=0;i<n;i++)
  {
    cout<<stu[i].number<<" "<<stu[i].name<<" ";
    printf("%.1lf\n",stu[i].score);
  }

    return 0;
  

}
