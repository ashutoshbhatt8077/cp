#include <bits/stdc++.h>
using namespace std;

#define f(i, s, e) for (long long i = s; i < e; i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vll vector<int>
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
        vector<ll> price(n), page(n);
        vector<ll> dp(x + 1, 0);
        for (auto &it : price)
            cin >> it;
        for (auto &it : page)
            cin >> it;

        for(ll i=n-1;i>=0;i--)
        for(ll p=x;p>=0;p--)
        {
            ll take=0;
            if(price[i]<=p)
            {
                take=page[i]+dp[p-price[i]];
            }
            dp[p]=max(take,dp[p]);
        }
        cout<<dp[x]<<endl;
    }

    return 0;
}