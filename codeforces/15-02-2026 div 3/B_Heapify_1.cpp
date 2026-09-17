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
        vector<int> temp(n + 1, 0), remp(n + 1, 0);
        for (ll i = 1; i <= n; i++)
        {
            cin >> temp[i];
        }
        bool f = true;
        for (ll i = 1; f&&i <= n; i++)
        {
            ll x = temp[i];
            bool tf=false;
            while ((x % 2) != 1)
            {
                x /= 2;
            }
            while (x<=n)
            {
                if(i==x)
                tf=true;
                x*=2;
            }
            f=tf;
        }
        if(f)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}