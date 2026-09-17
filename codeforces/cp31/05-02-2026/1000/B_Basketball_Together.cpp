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
    ll t,d;
    cin>>t>>d;
    vector<ll>temp(t);
    for(auto &it:temp)cin>>it;
    sort(temp.begin(),temp.end());
    ll j=t-1;
    ll cnt=t;
    ll ans=0;
    while(cnt>0)
    {
        if(temp[j]>d)
        {
        cnt--;
        ans++;
        j--;
        }
        else if(((d/temp[j])+1)<=cnt)
        {
            cnt-=((d/temp[j])+1);
            ans++;
            j--;
        }
        else
        {
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}