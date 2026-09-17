
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long> dsa(n);
    for(auto &it:dsa)cin>>it;
    sort(dsa.begin(),dsa.end());
    long long cnt=0;
    long long left=0;
    for(int i=n-1;i>=left;i--)
    {
        if(dsa[left]+dsa[i]<=k)
        {
            left++;
            cnt++;
        }
        else
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}