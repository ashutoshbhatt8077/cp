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
    ll n, q;
    cin >> n >> q;
    vector<ll> temp(n);
    ll sum = 0;
    set<ll> tem;
    for (ll i = 0; i < n; i++)
    {
        tem.insert(i + 1);
        cin >> temp[i];
        sum += temp[i];
    }
    ll fnum;
    while (q > 0)
    {
        q--;
        ll c;
        cin >> c;
        if (c == 1)
        {
            ll x, i;
            cin >> i >> x;
            if (tem.find(i) == tem.end())
            {
                sum -= fnum;
            }
            else
            {
                sum -= temp[i - 1];
            }
            sum+=x;
            tem.insert(i);
            temp[i - 1] = x;
            cout << sum << endl;
        }
        else
        {
            ll x;
            cin >> x;
            fnum = x;
            sum = n * x;
            tem.clear();
            cout << sum << endl;
        }
    }
    return 0;
}