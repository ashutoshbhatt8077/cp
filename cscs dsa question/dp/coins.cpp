
#include <bits/stdc++.h>
const long long mod=1e9+7;
using namespace std;

int main()
{
    long long n,x;
    cin>>n>>x;
    vector<long long> dsa(n);
    for(auto &it:dsa)cin>>it;
    vector<long long>dp(x+1,mod);
    for(int i=0;i<=x;i++)
    {
        if(i%dsa[0]==0)
        dp[i]=i/dsa[0];
    }
    for(long long i=1;i<n;i++)
    {
        vector<long long> temp(x+1);
        for(long long j=0;j<=x;j++)
        {
            int take=mod;
            if(dsa[i]<=j)
            take=1LL+temp[j-dsa[i]];
            int nt=dp[j];
            temp[j]=min(take,nt);
        }
        dp=temp;
    }
    if(dp[x]==mod)
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<dp[x]<<endl;
    }
}