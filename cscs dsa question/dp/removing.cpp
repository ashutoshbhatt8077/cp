
#include <bits/stdc++.h>
const long long mod=1e9+7;
using namespace std;

int main()
{
    long long n;
    cin>>n;
    vector<int> dp(n+1,mod);
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        int  temp=i;
        while(temp!=0)
        {
            if(i-temp%10>-1)
            dp[i]=min(dp[i],1+dp[i-temp%10]);
            temp/=10;
        }
    }
    cout<<dp[n]<<endl;
}