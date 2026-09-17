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

void solve()
{
    ll n,x,y,z;//1 1 1 1
    cin>>n>>x>>y>>z;
    ll noai=ceil((double)n/(x+y));//1
    if(x*z>n)//
    {
        cout<<noai<<endl;
        return ;
    }
    ll wiai=z+ceil((double)(n-x*z)/(x+10*y));//1
    cout<<min(noai,wiai)<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}