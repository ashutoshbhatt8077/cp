#include <bits/stdc++.h>
using namespace std;

#define f(i,s,e) for(long long i=s;i<e;i++)
#define f(temp) for(auto &it:temp)cin>>it;
#define ll long long
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int,int>
#define si set<int>
#define sc set<char>

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vll temp(n);
        vector<vector<ll>> remp(k+1);
        for(auto &it:temp)cin>>it;
        for(auto &it:remp){
            it.push_back(0);
        }
        for(int i=0;i<n;i++)
        {
            remp[temp[i]].push_back(i+1);
        }
        for(auto &it:remp){
            it.push_back(n+1);
        }
        ll ans=n;
        for(int j=1;j<=k;j++)
        {
            vector<ll> it=remp[j];
            ll ma=INT_MIN,sma=INT_MIN;
            for(int i=1;i<it.size();i++)
            {
                if((it[i]-it[i-1])>ma)
                {
                    sma=ma;
                    ma=it[i]-it[i-1];
                }
                else if((it[i]-it[i-1])<=ma&&(it[i]-it[i-1])>sma)
                {
                    sma=it[i]-it[i-1];
                }
            }
            if(ma!=INT_MIN)
            {
                //cout<<ma<<" "<<sma<<" "<<max(ma/2,sma)<<" , ";
                ans=min(ans,max((ma+1)/2,sma));
            }
        }
        cout<<ans-1<<endl;
    }

    return 0;
}