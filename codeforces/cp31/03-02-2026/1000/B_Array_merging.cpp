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
        long long n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(auto &it:a)cin>>it;
        for(auto &it:b)cin>>it;
        map<ll,ll> ma,mb;
        ll cnt1=1,cnt2=1,i;
        for(i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                cnt1++;
            }
            else
            {
                ma[a[i-1]]=max(ma[a[i-1]],cnt1);
                cnt1=1;
            }
            if(b[i]==b[i-1])
            {
                cnt2++;
            }
            else
            {
                mb[b[i-1]]=max(mb[b[i-1]],cnt2);
                cnt2=1;
            }
        }
        mb[b[i-1]]=max(mb[b[i-1]],cnt2);
        ma[a[i-1]]=max(ma[a[i-1]],cnt1);

        for(auto it:mb)
                ma[it.first]+=it.second;
                ll ans=0;
        for(auto const& [key,val]:ma)
        ans=max(ans,val);
        cout<<ans<<endl;
    }
}