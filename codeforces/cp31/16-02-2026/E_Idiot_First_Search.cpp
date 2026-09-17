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
    ll t;
    cin >> t;
    ll mo = 1e9 + 7;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<vector<ll>> temp(n + 1, vector<ll>(2, -1)),vis(n+1,vector<ll>(2,0));
        temp[0][0] = 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> temp[i][0] >> temp[i][1];
        }

        vector<ll> ans(n+1,0);
        ll cnt=1;
        ll v=1;
        vis[1][0]=1;
        while(v!=0)
        {
            if(temp[v][1])
            {
                v=temp[v][1];
                vis[v][0]=1;
            }
            
        }
    }

    return 0;
}