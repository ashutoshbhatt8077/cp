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
    int t = 1;
    // cin>>t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> temp(n);
        for (auto &it : temp)
        {
            cin >> it.first >> it.second;
        }
        sort(temp.begin(), temp.end());
        ll ans = 0;
        ll ti = 0;
        for (auto it : temp)
        {
            ti += it.first;
            ans += it.second - ti;
        }
        cout << ans << endl;
    }

    return 0;
}