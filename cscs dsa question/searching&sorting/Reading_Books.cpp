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
    int t = 1;
    // cin>>t;
    while (t--)
    {
        ll n;
        cin >> n;
        vll temp(n);
        for (auto &it : temp)
            cin >> it;
        ll sum = 0;
        ll ma = INT_MIN;
        for (auto &it : temp)
            sum += it;
        for (auto &it : temp)
            ma = max(ma, it);
        if (2 * ma > sum)
        {
            cout << 2 * ma << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
    return 0;
}