#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        long long n;
        cin>>n;
        vector<long long> temp(n);
        for(auto &it:temp)cin>>it;
        for(auto &it:temp)
        {
            if(it==1)
            it++;
        }
        cout<<temp[0]<<" ";
        for(int i=1;i<n;i++)
        {
            if(temp[i]%temp[i-1]==0)
            {
                temp[i]++;
            }
            cout<<temp[i]<<" ";
        }
        
        cout<<endl;
        
        
    }
}