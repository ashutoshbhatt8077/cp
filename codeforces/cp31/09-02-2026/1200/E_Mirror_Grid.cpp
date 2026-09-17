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
        vector<vector<ll>> temp(n, vector<ll>(n));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                char c;
                cin >> c;
                if (c == '1')
                    temp[i][j] = 1;
                else
                    temp[i][j] = 0;
            }
        int k = 0;
        ll ans = 0;
        for (int i = n; i > 0; i -= 2)
        {
            for (int j = k; j < k + i-1; j++)
            {
                ll dis = j - k;
               // cout<<ans<<" ";
                ans += min(4 - (temp[k][j] + temp[k + dis][k - 1 + i] + temp[k - 1 + i][k - 1 + i - dis] + temp[k - 1 + i - dis][k]), (temp[k][j] + temp[k + dis][k - 1 + i] + temp[k - 1 + i][k - 1 + i - dis] + temp[k - 1 + i - dis][k]));
            }
            k++;
        }
        cout << ans << endl;
    }
    return 0;
}