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
            cin >> it;
        sort(temp.begin(), temp.end());
        if (k > 2)
            cout << 0 << endl;
        else if (k == 1)
        {
            ll ans = temp[0];
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    ans = min(ans, abs(temp[i] - temp[j]));
                }
            }
            cout << ans << endl;
        }
        else
        {
            map<ll, ll> ma;
            ll ans =temp[0];
            for (auto it : temp)
                ma[it]++;
            for (auto it : ma)
                if (it.second > 1)
                    ans = 0;

            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (ma.find(abs(temp[i] - temp[j])) != ma.end())
                    {
                        ans = 0;
                    }
                    else
                    {
                        ans=min(ans,abs(temp[i] - temp[j]));
                        ll ubi = ub(temp, abs(temp[i] - temp[j]));
                        ll lbi = lb(temp, abs(temp[i] - temp[j]));
                        if (ubi != n)
                            ans = min(ans, abs(temp[ubi] - abs(temp[i] - temp[j])));
                        if (lbi != n)
                            ans = min(ans, abs(temp[lbi] - abs(temp[i] - temp[j])));
                        if ((lbi > 0ll) && (lbi < n))
                            ans = min(ans, abs(temp[lbi - 1] - abs(temp[i] - temp[j])));
                    }
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}