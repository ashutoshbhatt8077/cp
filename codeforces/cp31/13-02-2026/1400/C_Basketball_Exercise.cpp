#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long i=s;i<e;i++)
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int,int>
#define si set<int>
#define sc set<char>
#define ub(hei,num) upper_bound(hei.begin(), hei.end(), num) - hei.begin()
#define lb(hei,num) lower_bound(hei.begin(), hei.end(), num) - hei.begin()

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

        ll n;
        cin>>n;
        vector<ll> temp(n),remp(n);
        for(auto &it:temp)cin>>it;
        for(auto &it:remp)cin>>it;
        vector<vector<ll>> dp(n,vector<ll>(2));
        dp[0][0]=temp[0];
        dp[0][1]=remp[0];
        if(n==1)
        cout<<max(temp[0],remp[0])<<endl;
        else if(n==2)
        {
            cout<<max(temp[0]+remp[1],temp[1]+remp[0])<<endl;
        }
        else 
        {
            dp[1][0]=temp[1]+remp[0];
            dp[1][1]=temp[0]+remp[1];
            for(int i=2;i<n;i++)
            {
                dp[i][1]=remp[i]+max(dp[i-1][0],dp[i-2][0]);
                dp[i][0]=temp[i]+max(dp[i-1][1],dp[i-2][1]);
            }
            cout<<max(dp[n-1][0],dp[n-1][1])<<endl;
        }

    return 0;
}