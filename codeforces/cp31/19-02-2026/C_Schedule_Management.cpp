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
#define ub(hei, num) upper_bound(hei.begin(), hei.end(), num) - hei.begin()
#define lb(hei, num) lower_bound(hei.begin(), hei.end(), num) - hei.begin()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> temp(n);
        for (auto &it : temp)
        {
            cin >> it;
            it=(it%k);
        }
        sort(temp.begin(),temp.end());
        map<ll,ll> ma;
        for(auto it:temp)
        if(it!=0)
        ma[it]++;
        bool f=true;
        for(auto it:ma)
        {
            if(it.second>1)
            f=false;
        }
        if(f)
        {
            cout<<temp[n-1]+1<<endl;
        }

    }

    return 0;
}