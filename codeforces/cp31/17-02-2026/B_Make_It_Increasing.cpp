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
        ll cnt = 0;
        vector<ll> temp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i];
        }
        for (int i = n - 2; i >= 0; i--)
        {
            while (temp[i]!=0&&temp[i] >= temp[i + 1])
            {
                temp[i] = temp[i] / 2;
                cnt++;
            }
        }
        if (n > 1)
        {
            if (temp[0] == temp[1])
                cout << -1 << endl;
            else
                cout << cnt << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}