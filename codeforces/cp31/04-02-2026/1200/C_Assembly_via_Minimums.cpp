#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t > 0)
    {
        t--;
        ll n;
        cin>>n;
        vector<ll>temp((n*(n-1))/2);
        for(auto &it:temp)
        {
            cin>>it;
        }
        sort(temp.begin(),temp.end());
        map<int,int> ma;
        for(auto it:temp)
        {
            ma[it]++;
        }
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
        for(auto it:ma)pq.push({it.first,it.second});
        ll cnt=n-1;
        vector<ll> ans;
        while(!pq.empty())
        {
            auto it=pq.top();
            pq.pop();
            ll num=it.second;
            ll numi=it.first;
            ans.push_back(it.first);
            if(num>cnt)
            {
                pq.push({it.first,num-cnt});
            }
            cnt--;
        }
        ans.push_back(ans[ans.size()-1]);
        for(auto it:ans)cout<<it<<" ";
        cout<<endl;
    }
    
}