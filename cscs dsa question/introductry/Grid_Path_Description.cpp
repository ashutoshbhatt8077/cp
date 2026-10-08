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

void solve(string &s, ll in, ll i, ll j, ll &cnt, vector<vector<bool>> &vis)
{
    if (i == 6 && j == 0)
    {
        if (in == 48)
            cnt++;
        return;
    }
    if (in == 48)
        return;

    if (j > 0 && j < 6 && i > 0 && i < 6)
    {
        // Horizontal split (blocked left & right, open up & down)
        if (vis[i][j - 1] && vis[i][j + 1] && !vis[i - 1][j] && !vis[i + 1][j])
            return;
        // Vertical split (blocked up & down, open left & right)
        if (vis[i - 1][j] && vis[i + 1][j] && !vis[i][j - 1] && !vis[i][j + 1])
            return;
    }
    else
    {
        if (j == 0 && i > 0 && i < 6)
        {
            if (!vis[i - 1][j] && !vis[i + 1][j] && vis[i][j + 1])
            {
                return;
            }
        }
        else if (i == 0 && j > 0 && j < 6)
        {
            if (!vis[i][j - 1] && !vis[i][j + 1] && vis[i + 1][j])
            {
                return;
            }
        }
        else if (i == 6 && (j > 0 && j < 6))
        {
            if (!vis[i][j - 1] && !vis[i][j + 1] && vis[i - 1][j])
            {
                return;
            }
        }
         else if (j == 6 && (i > 0 && i < 6))
        {
            if (!vis[i - 1][j] && !vis[i + 1][j] && vis[i][j - 1])
            {
                return;
            }
        }
    }

    if (s[in] == '?')
    {
        if (i - 1 >= 0 && !vis[i - 1][j]) // U
        {
            vis[i - 1][j] = true;
            solve(s, in + 1, i - 1, j, cnt, vis);
            vis[i - 1][j] = false;
        }
        if (j - 1 >= 0 && !vis[i][j - 1]) // L
        {

            vis[i][j - 1] = true;
            solve(s, in + 1, i, j - 1, cnt, vis);
            vis[i][j - 1] = false;
        }
        if (j + 1 < 7 && !vis[i][j + 1]) // R
        {

            vis[i][j + 1] = true;
            solve(s, in + 1, i, j + 1, cnt, vis);
            vis[i][j + 1] = false;
        }
        if (i + 1 < 7 && !vis[i + 1][j]) // D
        {
            vis[i + 1][j] = true;
            solve(s, in + 1, i + 1, j, cnt, vis);
            vis[i + 1][j] = false;
        }
    }
    else if (s[in] == 'L')
    {
        if (j - 1 >= 0 && !vis[i][j - 1]) // L
        {
            vis[i][j - 1] = true;
            solve(s, in + 1, i, j - 1, cnt, vis);
            vis[i][j - 1] = false;
        }
    }
    else if (s[in] == 'R')
    {
        if (j + 1 < 7 && !vis[i][j + 1]) // R
        {
            vis[i][j + 1] = true;
            solve(s, in + 1, i, j + 1, cnt, vis);
            vis[i][j + 1] = false;
        }
    }
    else if (s[in] == 'D')
    {
        if (i + 1 < 7 && !vis[i + 1][j]) // D
        {
            vis[i + 1][j] = true;
            solve(s, in + 1, i + 1, j, cnt, vis);
            vis[i + 1][j] = false;
        }
    }
    else
    {
        if (i - 1 >= 0 && !vis[i - 1][j])
        {
            vis[i - 1][j] = true;
            solve(s, in + 1, i - 1, j, cnt, vis);
            vis[i - 1][j] = false;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<vector<bool>> vis(7, vector<bool>(7, false));
        ll cnt = 0;
        vis[0][0] = true;
        solve(s, 0, 0, 0, cnt, vis);
        cout << cnt << endl;
    }

    return 0;
}