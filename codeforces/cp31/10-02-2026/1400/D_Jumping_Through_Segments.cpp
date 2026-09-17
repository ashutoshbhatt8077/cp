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

bool sol(ll k,vector<pair<ll,ll>>& temp)
{
  ll a=0,b=0;
  for(auto it:temp)
  {
    ll ad=it.first;
    ll bd=it.second;
    if(a<ad&&b<ad)
    {
        if(b+k<ad)
        {
            return false;
        }
        else
        {
            b=min(b+k,bd);
            a=ad;
        }
    } 
    else if(a>bd&&b>bd)
    {
        if(a-k>bd)
        {
            return false;
        }
        else
        {
            a=max(ad,a-k);
            b=bd;
        }
    }
    else if(a<ad&&(b<=bd&&b>=ad))
    {
        b=min(b+k,bd);
        a=ad;
    }
    else if((a<=bd&&a>=ad)&&b>bd)
    {
        a=max(ad,a-k);
        b=bd;
    }
    else
    {
        a=max(ad,a-k);
        b=min(b+k,bd);
    }
  }
  return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>> temp(n);
        for(int i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            temp[i].first=x;
            temp[i].second=y;
            //cout<<temp[i].first<<" "<<temp[i].second<<endl;
        }
        ll left=0,right=1e9;
        while(left<=right)
        {
            ll mid=(left+right)/2;
            if(sol(mid,temp))
            {
                right=mid-1;
            }
            else
            {
                left=mid+1;
            }
        }
        cout<<right+1<<endl;
    }

    return 0;
}