
#include <bits/stdc++.h>
using namespace std;
void solve(string temp,int n,vector<bool>&vis,string te,set<string>&ans)
{
    if(n==0)
    {
        ans.insert(te);
        return;
    }
    for(int i=0;i<vis.size();i++)
    {
        if(!vis[i])
        {
            vis[i]=true;
            solve(temp,n-1,vis,te+temp[i],ans);
            vis[i]=false;
        }
    }
}
int main() {
  string temp;
  cin>>temp;
  set<string>ans;
  vector<bool> vis(temp.size(),false);
  solve(temp,temp.size(),vis,"",ans);
  cout<<ans.size()<<endl;
  for(auto it:ans)
  {
    cout<<it<<endl;
  }
}