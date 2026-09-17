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
        ll n;
        cin >> n;
        vector<ll> temp(n);
        for (auto &it : temp)
            cin >> it;
        sort(temp.begin(), temp.end());
        vector<vector<ll>> bit(n, vector<ll>(32, 0));
        for (int i = 0; i < n; i++)
        {
            ll j = 0;
            while (temp[i] > 0)
            {
                bit[i][j] = (temp[i] & 1);
                temp[i] = (temp[i] >> 1);
                j++;
            }
        }
        ll cnt = 0;
        for (int i = 1; i < n; i++)
        {
            ll j;
            for (j = 31; j >= 0; j--)
            {
                if (bit[i][j] == 1)
                    break;
            }
            if (j == -1)
            {
                cnt += i;
            }
            else
            {
                ll left = 0, right = i;
                while (left <= right)
                {
                    ll mid = (left + right) / 2;
                    if (bit[mid][j] == 0)
                        left = mid + 1;
                    else
                        right = mid - 1;
                }
                if (right == -1)
                    cnt += i;
                else
                    cnt += (i - left);
            }
        }
        cout << cnt << endl;
    }

    return 0;
}