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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> temp(n);
        for (auto &it : temp)
            cin >> it;
        sort(temp.begin(), temp.end());
        vll presum;
        presum.push_back(0);
        for (int i = 0; i < n; i++)
            presum.push_back(presum[i] + temp[i]);
        ll j = n - k;
        ll ans = 0;
        for (int i = 0; i <= 2 * k; i += 2)
        {
            ans = max(ans, presum[j] - presum[i]);
            j++;
        }
        cout << ans;
        cout << endl;
    }

    return 0;
}