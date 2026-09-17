#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        long long n,k;
        cin>>n>>k;
        vector<ll> a(n),b(n);
        for(auto &it:a)cin>>it;
        for(auto &it:b)cin>>it;
        ll ans=0,sum=0,ma=b[0];
        for(int i=0;i<min(k,n);i++)
        {
            sum+=a[i];
            ma=max(ma,b[i]);
            ans=max(ans,sum+(k-(i+1))*ma);
        }
        cout<<ans<<endl;
    }
}