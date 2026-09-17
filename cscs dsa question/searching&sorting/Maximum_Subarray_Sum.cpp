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
    int t=1;
    //cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int> temp(n);
        for(auto &it:temp)cin>>it;
        ll sum=0;
        ll ans=0;
        for(int i=0;i<n;i++)
        {
            sum+=temp[i];
            if(sum<0)
            {
                sum=0;
            }
            ans=max(ans,sum);
        }
        sort(temp.begin(),temp.end());
        if(temp[n-1]<0)cout<<temp[n-1]<<endl;
        else
        cout<<ans<<endl;
    }

    return 0;
}