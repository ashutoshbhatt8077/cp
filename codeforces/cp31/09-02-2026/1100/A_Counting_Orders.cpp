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
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll mod=1e9+7;
        vector<ll> a(n),b(n);
        for(auto &it:a)cin>>it;
        for(auto &it:b)cin>>it;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        ll ans=1;
        ll j=n-1;
        for(ll i=n-1;i>=0;i--)
        {
            while(j>=0&&a[j]>b[i])
            {
                j--;
            }
            ans=(ans*(i-j))%mod;
        }
        cout<<ans<<endl;
    }   

    return 0;
}