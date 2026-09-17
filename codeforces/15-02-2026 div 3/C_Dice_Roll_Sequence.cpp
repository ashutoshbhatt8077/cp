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
        vector<ll> temp(n);
        for (auto &it : temp)
            cin >> it;
        vector<int> chi;
        for (ll i = 0; i < n - 1; i++)
        {
            if ((temp[i] + temp[i + 1]) == 7 || temp[i] == temp[i + 1])
            {
                chi.push_back(1);
            }
            else
            {
                chi.push_back(0);
            }
        }
        ll ans = 0;
        ll cnt = 0;
        
        for (ll i = 0; i < chi.size(); i++)
        {
            if (chi[i] == 1)
                cnt++;
            else
            {
                ans += ((cnt + 1) / 2);
                cnt = 0;
            }
        }
        ans += (cnt + 1) / 2;
        cout << ans << endl;
    }

    return 0;
}