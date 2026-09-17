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
        vector<ll> temp(n,0),odd(n,0),eve(n,0);
        for(auto &it:temp)cin>>it;
        odd[0]=temp[0];
        for(int i=1;i<n;i++)
        {
            if(i%2!=0)
            {
                odd[i]=odd[i-1];
                eve[i]=eve[i-1]+temp[i];
            }
            else
            {
                odd[i]=odd[i-1]+temp[i];
                eve[i]=eve[i-1];
            }
        }
        set<ll> se;
        se.insert(0);
        bool f=false;
        for(int i=0;i<n;i++)
        {
            if(se.find(odd[i]-eve[i])==se.end())
            se.insert(odd[i]-eve[i]);
            else
            {
                f=true;
                 break;
        }
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}