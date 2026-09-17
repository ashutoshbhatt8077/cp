#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        long long n,q;
        cin>>n;
        vector<int> temp(n);
        for(auto &it:temp)cin>>it;
        int ans=temp[n-1]-temp[0];
        for(int i=1;i<n;i++)
        {
            ans=max(ans,temp[i]-temp[0]);
            ans=max(ans,temp[n-1]-temp[i-1]);
            ans=max(ans,temp[i-1]-temp[i]);
        }
        cout<<ans<<endl;
    }
}