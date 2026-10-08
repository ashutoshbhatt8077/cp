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

bool sol(ll mi, vll &temp,ll t)
{
    ll cnt = 0;
    for (auto it : temp)
    {
        cnt += mi / it;
        if(cnt>=t)return cnt;
    }
    return cnt>=t;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        ll n, t;
        cin >> n >> t;
        vll temp(n);
        for (auto &it : temp)
            cin >> it;
        ll right = temp[0] * t;
        ll left = 1;
        ll ans = right;
        while (left <= right)
        {
            ll mid = left + (right - left) / 2;
            if (sol(mid, temp,t))
            {
                ans = min(ans, mid);
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