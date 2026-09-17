#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;

        long long n,k;
        cin>>n>>k;
        vector<long long>temp(n*k);
        for(auto &it:temp)cin>>it;
        long long num,ans=0;
        num=(n+1)/2-1;
        for(int i=num*k;i<(n*k);i+=(n-num))
        ans+=temp[i];
        cout<<ans<<endl;
    }
}