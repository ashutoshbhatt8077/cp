#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        long long n,a,b;
        cin>>n;
        vector<long long > temp(n);
        for(auto &it:temp)cin>>it;
        long long ans=0;
        for(int i=1;i<n;i++)
        {
            if((temp[i]+temp[i-1])%2==0)
            {
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}