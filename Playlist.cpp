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
        vll temp(n);
        for (auto &it : temp)
            cin >> it;
        map<ll, ll> ma;
        ll j = 0;
        ll ans = 1;
        for (int i = 0; i < n; i++)
        {
            if (ma.find(temp[i]) != ma.end())
            {
                ll index = ma[temp[i]] + 1;
                for (ll k = j; k < index; k++)
                {
                    ma.erase(temp[k]);
                }
                j = index;
            }
            ma[temp[i]] = i;
            ans = max((ll)ma.size(), ans);
        }
        cout << ans << endl;
    }

    return 0;
}