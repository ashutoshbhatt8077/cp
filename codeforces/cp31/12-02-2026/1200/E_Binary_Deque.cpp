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
#define in(temp) for(auto &it:temp)cin>>it;
#define print(temp) for(auto it:temp) cout<<it<<" ";

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vll temp(n);
        in(temp)
        map<ll,ll> ma;
        ll sum=0,ans=n;
        ma[0]=-1;
        for(int i=0;i<n;i++)
        {
            sum+=temp[i];
            if(ma.find(sum)==ma.end())
            ma[sum]=i;
            if(sum>=k)
            {
                ans=min(ans,n-(i-ma[sum-k]+1));
            }
        }
        if(sum<k)
        cout<<-1<<endl;
        else
        cout<<ans+1<<endl;
        

    }

    return 0;
}