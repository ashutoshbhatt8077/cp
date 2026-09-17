#include <bits/stdc++.h>
using namespace std;

#define f(i, s, e) for (long long i = s; i < e; i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<ll>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
bool sol(ll num,vll l,vll r,vll &temp,ll sum)
{
    for(auto &it:l)it=max(it,num); 
    for(auto &it:r)it=max(it,num); 
    ll su=0;
    for(int i=0;i<temp.size();i++)
    {
        if(l[i]==-1||r[i]==-1)
        continue;
        else
        {
            su+=max(0ll,min(num,min(l[i],r[i]))-temp[i]);
        }
    }
    return su>sum?false:true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vll temp(n);
        for (auto &it : temp)
            cin >> it;
        stack<int> left, right;
        vector<ll> le(n, -1), ri(n, -1);
        for (ll i = 0; i < n; i++)
        {
            while (left.size() != 0 && temp[i] > left.top())
            {
                left.pop();
            }
            if (left.size() == 0)
            {
                le[i] = -1;
                left.push(temp[i]);
            }
            else
            {
                le[i] = left.top();
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            while (right.size() != 0 && temp[i] > right.top())
            {
                right.pop();
            }
            if (right.size() == 0)
            {
                ri[i] = -1;
                right.push(temp[i]);
            }
            else
            {
                ri[i] = right.top();
            }
        }
        ll lefti=1,righti=1e10;
        while(lefti<=righti)
        {
            ll mid=lefti+(righti-lefti)/2;
            if(sol(mid,le,ri,temp,x))
            {
                lefti=mid+1;
            }
            else
            {
                righti=mid-1;
            }
        }
        cout<<lefti-1<<endl;
    }

    return 0;
}