
#include <bits/stdc++.h>
const long long mod=1e9+7;
using namespace std;
int solve(vector<long long>&dsa,long long target,vector<long long> &dp)
{
    if(target==0)
    return 1;
    long long t=0;
    if(dp[target]!=-1)
    return dp[target];
    for(int in=0;in<6;in++)
   { if(dsa[in]<=target)
    {
        t=(t+solve(dsa,target-dsa[in],dp))%mod;
    }
   }
    return dp[target]=(t%mod);
}
int main()
{
    long long n;
    cin>>n;
    vector<long long> dsa={1,2,3,4,5,6};
    vector<long long> dp(n+1,-1);
    cout<<solve(dsa,n,dp)<<endl;
}