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
bool tr(vector<ll> &temp, int i, int j, vector<ll> &remp)
{
    for(int a=j;a<=i;a++)
    if(temp[a]!=remp[a])return true;
    return false;
}
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
        vector<ll> temp(n), remp(n);
        for (auto &it : temp)
            cin >> it;
        for (auto &it : remp)
            cin >> it;
        ll l = 0, r = 0, j = 0;
        ll cnt = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (remp[i] <= remp[i + 1])
            {
                cnt++;
            }
            else
            {
                if (r - l <= cnt && tr(temp, i, j, remp))
                {
                    r = i;
                    l = j;
                }
                j = i + 1;
                cnt = 0;
            }
        }
        if (r - l <= cnt&& tr(temp, n-1, j, remp))
        {
            r = n - 1;
            l = j;
        }
        cout << l + 1 << " " << r + 1 << endl;
    }
    return 0;
}