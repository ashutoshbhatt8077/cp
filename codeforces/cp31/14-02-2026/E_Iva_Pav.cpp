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
        ll n;
        cin >> n;
        vector<vector<ll>> temp(n, vector<ll>(32, 0));
        vector<ll> ve(n);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            ve[i] = x;
            ll j = 0;
            while (x > 0)
            {
                temp[i][j+1] = (x & 1);
                x = x >> 1;
                j++;
            }
        }
        for (int i = 1; i < n; i++)
            for (int j = 0; j < 32; j++)
                temp[i][j] += temp[i - 1][j];

        for (int j = 0; j < 32; j++)
        {
            for (int i = 0; i < n; i++)
               {// cout << temp[i][j] << " ";
            //cout << endl;
            }
        }

        ll q;
        cin >> q;
        while (q > 0)
        {
            q--;
            ll l, k;
            cin >> l >> k;
            l--;
            ll r = n - 1;
            if (ve[l] < k)
            {
                cout << -1 << " ";
            }
            else
            {
                while (l < r)
                {
                    ll mid = (l + r) / 2;
                    ll num = 0;
                    for (ll a = 31; a >= 0; a--)
                    {
                        if ((temp[mid][a] - temp[l][a]) == (mid - l))
                        {
                            num += (1 << (a));
                        }
                    }
                    if (num >= k)
                        l = mid + 1;
                    else
                        r = mid - 1;
                }
                 cout << l+1 << " ";
            }
        }
        cout << endl;
    }

    return 0;
}