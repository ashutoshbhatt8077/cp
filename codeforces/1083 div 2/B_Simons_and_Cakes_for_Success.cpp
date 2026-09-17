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
        ll n, i = 2;
        cin >> n;
        set<ll> se;
        while ((i * i) <= n)
        {
            if (n % i == 0)
            {
                se.insert(i);
                n /= i;
                i = 2;
            }
            else
            {
                i++;
            }
        }
        if(n!=1)
        {
            se.insert(n);
        }
        ll ans = 1;
        for (auto it : se)
        {
           ans*=it;
        }
        cout << ans << endl;
    }

    return 0;
}