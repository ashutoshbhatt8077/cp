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

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll sum=0,cnt=0;
        vector<ll> temp(n);
        for(auto &it:temp)cin>>it;
        for(int i=0;i<n;i++)
        {
            sum+=temp[i];
            cnt+=(temp[i]+x-1)/x;
        }
        cout<<(sum+x-1)/x<<" "<<cnt<<endl;
    }

    return 0;
}