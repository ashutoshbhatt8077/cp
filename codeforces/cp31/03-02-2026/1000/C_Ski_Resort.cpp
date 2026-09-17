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
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long> temp(n);
        for(auto &it:temp)cin>>it;
        ll ans=0;
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            if(temp[i]>q)
            {
                if(cnt>=k)
                ans+=((cnt-k+1)*(cnt-k+2))/2;
                cnt=0;
            }
            else
            {
                cnt++;
            }
        }
        if(cnt>=k)
        ans+=((cnt-k+1)*(cnt-k+2))/2;
        cout<<ans<<endl;
        
    }
}