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
        string tempi;
        cin>>tempi;
        set<char> temp,remp;
        vector<ll> a(n,0),b(n,0);
        for(int i=0;i<n-1;i++)
        {
            temp.insert(tempi[i]);
            a[i]=temp.size();
        }
        for(int i=n-1;i>0;i--)
        {
            remp.insert(tempi[i]);
            b[i]=remp.size();
        }
        ll ans=0;
        for(int i=0;i<n-1;i++)
        ans=max(ans,a[i]+b[i+1]);
        cout<<ans<<endl;
    }
}