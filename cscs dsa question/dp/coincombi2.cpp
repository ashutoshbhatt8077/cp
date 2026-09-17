
#include <bits/stdc++.h>
const long long mod=1e9+7;
using namespace std;

int main()
{
    long long n,x;
    cin>>n>>x;
    vector<long long> dsa(n);
    for(auto &it:dsa)cin>>it;
    vector<long long>temp(x+1,0);
    temp[0]=1;
    for(long long i=0;i<n;i++)
    {
        for(long long j=dsa[i];j<=x;j++)
        {
            temp[j]=(temp[j-dsa[i]]+temp[j])%mod;
        }
    }
        cout<<temp[x]<<endl;
}