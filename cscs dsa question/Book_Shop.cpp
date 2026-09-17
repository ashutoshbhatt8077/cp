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
int solve(int index, vector<int> &cost, vector<int> &page, int total_cost, int size, vector<vector<int>> &dp)
{
    if (index == size)
    {
       return 0;
    }

    if(dp[index][total_cost]!=-1)
    return dp[index][total_cost];
    int take = 0, nottake = 0;
    if (total_cost - cost[index] >= 0)
            take = page[index] + solve(index + 1, cost, page, total_cost - cost[index], size, dp);
        nottake = solve(index + 1, cost, page, total_cost, size, dp);
    return dp[index][total_cost] = max(take, nottake);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vector<vector<int>> dp(n, vector<int>(c + 1, -1));
        vector<int> cost(n), page(n);
        for (auto &it : cost)
            cin >> it;
        for (auto &it : page)
            cin >> it;
        cout << solve(0, cost, page, c, n, dp) << endl;
    }

    return 0;
}