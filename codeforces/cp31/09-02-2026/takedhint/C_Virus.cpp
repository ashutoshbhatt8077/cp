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
        ll n,m;
        cin>>n>>m;
        vector<ll> temp(m);
        for(auto &it:temp)cin>>it;
        sort(temp.begin(),temp.end());
        vector<ll> diff(m-1);
        for(int i=0;i<m-1;i++)
        {
            diff[i]=temp[i+1]-temp[i]-1;
        }
        diff.push_back(n-temp[m-1]+temp[0]-1);
        ll ans=0;
        ll cnt=0;
        sort(diff.begin(),diff.end());
        //for(auto it:diff)cout<<it<<" ";
        for(int i=m-1;i>=0;i--)
        {
            if(diff[i]-2*cnt==1)
           {
             ans+=1; 
             cnt+=1; 
           }
            else
            {
                ans+=max(diff[i]-2*cnt-1,0ll);
            cnt+=2;
             }
        }
        cout<<n-ans<<endl;
    }

    return 0;
}