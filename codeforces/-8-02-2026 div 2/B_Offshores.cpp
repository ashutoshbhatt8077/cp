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
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> temp(n);
        for (auto &it : temp)
            cin >> it;
        vector<pair<ll, ll>> remp(n);
        for (ll i = 0; i < n; i++)
        {
            remp[i].first = (temp[i] / x) * (x - y) + temp[i] % x;
            remp[i].second = i;
        }
        ll ans=0;
        sort(remp.begin(),remp.end());
        for(ll i=0;i<n;i++)
        {
            if(i==remp[n-1].second)
            ans+=temp[i];
            else
            ans+=(temp[i]/x)*y;
        }
        cout<<ans<<endl;
    }

    return 0;
}