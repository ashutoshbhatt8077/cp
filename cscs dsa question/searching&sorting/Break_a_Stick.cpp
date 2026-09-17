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
        vector<ll> a(n);
        for(auto &it:a)cin>>it;
        ll ans=INT_MAX;
        ll sum=0;
        for(auto it:a)sum+=it;
        ll curr=a[0];
        sum-=a[0];
        ans=abs(sum-curr);
        for(int i=1;i<n;i++)
        {
            curr+=a[i];
            sum-=a[i];
            ans=min(ans,abs(sum-curr));
        }
        cout<<ans<<endl;
    }

    return 0;
}