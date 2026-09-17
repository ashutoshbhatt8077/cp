#include <bits/stdc++.h>
using namespace std;
void solve(long long &ans,vector<long long> temp,long long sum,long long n,long long st)
{
    if(n==-1)
    {
        ans=min(ans,abs(2*st-sum));
        return ;
    }
    solve(ans,temp,sum,n-1,st+temp[n]);
    solve(ans,temp,sum,n-1,st);
}
int main()
{
    long long n;
    cin >> n;
    vector<long long> temp(n);
    long long sum = 0;
    for (auto &it : temp)
    {
        cin >> it;
        sum += it;
    }
    long long ans=INT_MAX;
    solve(ans,temp,sum,n-1,0);
    cout<<ans<<endl;
}