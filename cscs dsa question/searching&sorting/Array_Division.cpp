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

bool sol(ll mid, ll k, vll &temp)
{
    ll sum = 0;
    ll cnt = 1;
    for (auto it : temp)
    {
        if(it>mid)
        return false;
        sum += it;
        if (sum > mid)
        {
            sum = it;
            cnt++;
        }
    }
    return cnt <= k;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vll temp(n);
        for (auto &it : temp)
            cin >> it;
        ll left = 0, right = INT_MAX;
        ll sum = 0;
        for (auto it : temp)
            sum += it;
        right = sum;
        ll ans=0;
        while (left <= right)
        {
            ll mid = left + (right - left) / 2;
            if (sol(mid, k, temp))
            {
                ans=mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}