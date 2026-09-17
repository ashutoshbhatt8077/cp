#include <bits/stdc++.h>
using namespace std;

#define f(i, s, e) for (long long i = s; i < e; i++)
#define ll long long
#define lli __int128_t
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
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n), b(n), c(n);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        for (auto &it : c)
            cin >> it;
        ll num = 0;
        for (int i = 0; i < n; i++)
        {
            if ((x | a[i]) <= x)
            {
                num = (a[i] | num);
            }
            else
            {
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if ((x | c[i]) <= x)
            {
                num = (c[i] | num);
            }
            else
            {
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if ((x | b[i]) <= x)
            {
                num = (b[i] | num);
            }
            else
            {
                break;
            }
        }
        if (num == x)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
                }
    }

    return 0;
}