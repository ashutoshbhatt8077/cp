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
        ll n, m;
        cin >> n >> m;
        vector<vector<ll>> temp(n, vector<ll>(m)), prec(n, vector<ll>(m + 1, 0)), prer(n + 1, vector<ll>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> temp[i][j];
        for (int i = 0; i < n; i++)
            for (int j = 1; j <= m; j++)
                prec[i][j] += prec[i][j - 1] + temp[i][j - 1];
        for (int i = 1; i <= n; i++)
            for (int j = 0; j < m; j++)
                prer[i][j] += prer[i - 1][j] + temp[i - 1][j];
        ll rc = 0, lc = 0;
        string tem = "";
        ll i = n, j = m, step = n + m;
        // Ensure you don't go out of bounds
        while (i > 0 || j > 0)
        {
            if (i == 0)
            { // Must move left
                lc+=prer[i][j];
                j--;
                tem += 'R';
            }
            else if (j == 0)
            { // Must move up
                rc+=prec[i][j];
                i--;
                tem += 'D';
            }
            else
            {
                // Your greedy logic here
                if (lc<rc)
                {
                    lc+=prer[i][j-1];
                    i--;
                    tem += 'D';
                }
                else
                {
                    rc+=prec[i-1][j];
                    j--;
                    tem += 'R';
                }
            }
        }
        reverse(tem.begin(), tem.end());
        cout << rc * lc<<endl;
        cout<<tem<<endl;
    }

    return 0;
}
