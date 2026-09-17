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
        vector<int> temp(n);
        for(auto &it:temp)cin>>it;
        int mi=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            mi=min(temp[i+1]-temp[i],mi);
        }
        if(mi<0)
        cout<<0<<endl;
        else
        cout<<max(1,mi/2+1)<<endl;
    }

    return 0;
}