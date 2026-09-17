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
bool tre(ll j, ll k, ll len, vector<vector<bool>> &vis)
{
    for(int i=k;i<vis.size();i+=len)
    {
        if(!vis[i][j])
        return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n,k;
        cin >> n >> k;
        vector<string> temp(k);
        for (int i = 0; i < k; i++)
        {
            cin >> temp[i];
        }
        vector<vector<bool>> vis(n, vector<bool>(26,false));
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                vis[j][temp[i][j] - 'a'] = true;
            }
        }
        string ans = "";
        bool b = false;
        for (int i = 1; !b && i <= n; i++)
        {
            if (n % i == 0)
            {
                int len = i;
                string te = "";
                bool f = true;
                for (k = 0; f && k < len; k++)
                {
                    f = false;
                    for (int j = 0; !f && j < 26; j++)
                    {
                        if (tre(j, k, len, vis))
                        {
                            te += 'a' + j;
                            f = true;
                        }
                    }
                }
                if (te.size() == len)
                {
                    for(int q=0;q<n/i;q++)
                    ans+=te;
                    b = true;
                }
            }
        }
        cout << ans << endl;
    }

    return 0;
}