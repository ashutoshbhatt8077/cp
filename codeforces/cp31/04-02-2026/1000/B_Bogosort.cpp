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
        cin>>n;
        vector<long long> temp(n);
        for(auto &it:temp)cin>>it;
        sort(temp.begin(),temp.end());
        for(int i=n-1;i>=0;i--)
        cout<<temp[i]<<" ";
        cout<<endl;

    }
}