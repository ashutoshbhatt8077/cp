#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
        ll n,q;
        cin>>n>>q;
        vector<bool> vis(50,false);
        vector<pair<ll,ll>> temp;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(!vis[x-1])
            {
                temp.push_back({x,i+1});
                vis[x-1]=true;
            }
        }
        for(int i=0;i<q;i++)
        {
            ll x;
            cin>>x;
            for(int k=0;k<temp.size();k++)
            {
                if(temp[k].first==x)
                {
                    cout<<temp[k].second<<" ";
                    temp[k].second=1;
                    for(int j=k;j>0;j--)
                    {
                        temp[j].first=temp[j-1].first;
                        temp[j].second=temp[j-1].second+1;
                    }
                    temp[0].first=x;
                    temp[0].second=1;
                }
            }
        }
        cout<<endl;
    
}