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
        ll n, x;
        cin >> n >> x;
        vll temp(n);
        for (auto &it : temp)
            cin >> it;
        map<ll, ll> ma;
        ma[0] = 1;
        ll ans = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += temp[i];
            if (ma.find(sum - x) != ma.end())
            {
                ans += ma[sum - x];
            }
            ma[sum]++;
        }
        cout << ans << endl;
    }
 
    return 0;
}