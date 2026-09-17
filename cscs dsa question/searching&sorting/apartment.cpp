
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k;
    cin>>n>>m>>k;
    vector<long long> dsa(n),as(m);
    for(auto &it:dsa)cin>>it;
    for(auto &it:as)cin>>it;
    int cnt=0;
    sort(dsa.begin(),dsa.end());
    sort(as.begin(),as.end());
    int j=0;
    for(int i=0;i<n&&j<m;i++)
    {
        if(abs(dsa[i]-as[j])<=k)
        {
            cnt++;
            j++;
        }
        else if(dsa[i]-as[j]>k)
        {
            j++;
            i--;
        }
    }
    cout<<cnt<<endl;
}