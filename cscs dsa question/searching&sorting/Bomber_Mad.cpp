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
        ll row, col, step;
        cin >> row >> col >> step;
        vector<string> temp(row);
        for (auto &it : temp)
            cin >> it;
        vector<bool> r(row, true), c(col, true);
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (temp[i][j] == '#')
                {
                    r[i] = false;
                    c[j] = false;
                }
            }
        }
        ll ans = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (temp[i][j] == '.' && (r[i] || c[j]))
                {
                    ans++;
                }
            }
        }

        
        cout << ans << endl;
    }

    return 0;
}