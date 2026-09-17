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
        ll n, x;
        cin >> n;
        map<ll, ll> ma;
        ma[1] = n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            for (int j = 2; j * j <= x; j++)
            {
                while (x % j == 0)
                {
                    ma[j]++;
                    x /= j;
                }
            }   
                if(x>1) 
                ma[x]++;
        }

        bool f = false;
        for (auto it : ma)
            if (it.second % n != 0 )
                f = true;
        if (f)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}