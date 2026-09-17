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
        vector<ll> temp(n);
        for(auto &it:temp)cin>>it;
        vector<pair<ll,ll>> real;
        for(int i=0;i<n;i++)
        {
            if(temp[i]<i+1)
            real.push_back({i+1,temp[i]});
        }
        ll cnt=0;
        for(int i=1;i<real.size();i++)
        {
            ll left=0,right=i-1;
            while(left<=right)
            {
                ll mid=(left+right)/2;
                if(real[mid].first>=real[i].second)
                {
                    right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
            cnt+=right+1;
        }
        cout<<cnt<<endl;
    }

    return 0;
}