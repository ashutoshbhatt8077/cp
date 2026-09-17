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
        vector<ll> temp(n);
        for (auto &it : temp)
            cin >> it;
        ll a = temp[0], b =temp[1];
        for (int i = 0; i < n; i++)
            if (i % 2 == 0)
                a = gcd(a, temp[i]);
            else
                b = gcd(b, temp[i]);

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (temp[i] % b == 0)
                    b = 1;
            }
            else
            {
                if (temp[i] % a == 0)
                    a = 1;
            }
        }
        if (a == 1)
        {
            if (b == 1)
                cout << 0 << endl;
            else
                cout << b << endl;
        }
        else
            cout << a << endl;
    }

    return 0;
}