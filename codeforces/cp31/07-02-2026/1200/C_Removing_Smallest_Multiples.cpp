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
        string s;
        cin >> s;
        ll ans = 0;
        vector<bool> vis(n, false);
        for (int i = 0; i < n; i++)
            if (s[i] == '1')
            {
                s[i] == true;
            }
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j += (i + 1))
                if (s[j] == '0')
                {
                    if (!vis[j])
                    {
                        ans += (i + 1);
                        vis[j] = true;
                    }
                }
                else
                {
                    break;
                }
        }
        cout << ans << endl;
    }

    return 0;
}