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
        ll n, m, x;
        cin >> n >> m;
        vector<vector<ll>> temp(m, vector<ll>(n));
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                cin >> temp[j][i];
            }
        }
        for (int i = 0; i < m; i++)
        {
            sort(temp[i].begin(), temp[i].end());
        }

            ll ans=0;

            for (ll i = 0; i < m; i++)
            {
                for (ll j = 0; j < n; j++)
                {
                    ans-=(temp[i][j]*(n-j-1));
                    ans+=(temp[i][j]*(j));
                }
            }
        
        cout << ans << endl;
    }

    return 0;
}