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
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vll temp(n);
        for (auto &it : temp)
            cin >> it;
        vll cnt(33, 0);
        for (auto it : temp)
        {
            ll num = it;
            ll i = 0;
            while (i < 33 && num > 0)
            {
                cnt[i] += (num % 2);
                num /= 2;
                i++;
            }
        }
        ll ans = 0;
        // for(auto it:cnt)cout<<it<<" ";
        // cout<<endl;
        for (int i = 30; i >= 0; i--)
        {
            if (k >= (n - cnt[i]))
            {
                k -= (n - cnt[i]);
                cnt[i] = n;
                // cout<<k<<endl;
            }

        }
        // for(auto it:cnt)cout<<it<<" ";
        // cout<<endl;
        for (int i = 32; i >= 0; i--)
        {
            if (cnt[i] == n)
            {
                ans += (1 << i);
            }
        }
        cout << ans << endl;
    }

    return 0;
}