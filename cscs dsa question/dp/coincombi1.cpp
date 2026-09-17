
#include <bits/stdc++.h>
const long long mod=1e9+7;
using namespace std;

int main()
{
    long long n,x;
    cin>>n>>x;
    vector<long long> dsa(n);
    for(auto &it:dsa)cin>>it;
    vector<long long>dp(x+1,0);
    dp[0]=1;
    for(int i=0;i<=x;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i>=dsa[j])
            dp[i]=(dp[i]+dp[i-dsa[j]])%mod;
        }
    }
    cout<<dp[x]<<endl;
}