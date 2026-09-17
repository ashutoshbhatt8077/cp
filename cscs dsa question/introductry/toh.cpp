
#include <bits/stdc++.h>
using namespace std;
void solve(long long n,char a,char b,char c,vector<pair<char,char>> &temp)
{
    if(n==0)
    return;
    solve(n-1,a,c,b,temp);
    temp.push_back({a,c});
    solve(n-1,b,a,c,temp);
}
int main() {
  long long n;
  cin>>n;
  vector<pair<char,char>>temp;
  solve(n,'1','2','3',temp);
  cout<<temp.size()<<endl;
  for(auto it:temp)
  {
    cout<<it.first<<" "<<it.second<<endl;
  }
}