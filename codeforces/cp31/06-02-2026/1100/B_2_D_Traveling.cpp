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
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<vector<ll>> temp(n,vector<ll>(2));
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i][0] >> temp[i][1];
        }
        if (a <= k && b <= k)
        {
            cout << 0 << endl;
        }
        else if (a > k && b > k)
        {
            ll dist=abs(temp[a - 1][0] - temp[b - 1][0]) + abs(temp[a - 1][1] - temp[b - 1][1]);
            ll dist1=1e10,dist2=1e10;
             for (int i = 0; i < k; i++)
            {
                dist1 = min(dist1, abs(temp[a - 1][0] - temp[i][0]) + abs(temp[a - 1][1] - temp[i][1]));
            }
             for (int i = 0; i < k; i++)
            {
                dist2 = min(dist2, abs(temp[b - 1][0] - temp[i][0]) + abs(temp[b - 1][1] - temp[i][1]));
            }

            cout<<min(dist1+dist2,dist)<<endl;
        }
        else
        {
            ll dis = 1e10;
            ll mi = min(a, b);
            ll ma = max(a, b);
            for (int i = 0; i < k; i++)
            {
                dis = min(dis, abs(temp[ma - 1][0] - temp[i][0]) + abs(temp[ma - 1][1] - temp[i][1]));
            }
            cout<<dis<<endl;
        }
    }

    return 0;
}