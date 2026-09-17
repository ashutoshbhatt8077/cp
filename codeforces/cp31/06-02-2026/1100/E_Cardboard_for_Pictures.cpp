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
ll sol(vector<ll>& temp,ll num,ll c)
{
    ll ans=0;
    for(auto it:temp)
    {
        ll side=it+2*num;
        side*=side;
        if(ans>c-side)
        {
            return c+1;
        }
        else
        {
            ans+=side;
        }
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,c;
        cin>>n>>c;
        vector<ll> temp(n);
        for(auto &it:temp)cin>>it;
        ll left=1,right=1e10;
        while(left<=right)
        {
            ll mid=(left+right)/2;
            ll ti=sol(temp,mid,c);
            if(ti==c)
            {
              cout<<mid<<endl;
               break;
            }
            else if(ti>c)
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }  
       
    }

    return 0;
}